#include "main.h"

/**
  * make_buf - allocates a buffer for the new file.
  *
  * @fptr: pointer to the new file which buffer will store chars at.
  *
  * Return: pointer to the new buffer.
  */

static char *make_buf(char *fptr)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fptr);
		exit(99);
	}
	return (buff);
}

/**
  * cls_file - closes the file.
  *
  * @fd: file descriptor that will be closed.
  *
  * Return: nothing.
  */

static void cls_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
  * main - entry point.
  *
  * @argc: argument counter.
  * @argv: pointer to the argument vector.
  *
  * Return: Always 0.
  *
  * Error handle: if argc is not correct - exit 97.
  *		if the file_from doesn't exist or can't be read - exit 98.
  *		if the file_to cannot be created or written to - exit 99.
  *		if the file_to or file_from can't be closed - exit 100.
  */

int main(int argc, char *argv[])
{
	int file_from, file_to, rd, wrt;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = make_buf(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	rd = read(file_from, buff, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from to %s\n",
					argv[1]);
			free(buff);
			exit(98);
		}

		wrt = write(file_to, buff, rd);
		if (file_to == -1 || wrt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
					argv[2]);
			free(buff);
			exit(99);
		}

		rd = read(file_from, buff, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);

	free(buff);
	cls_file(file_from);
	cls_file(file_to);
	return (0);
}
