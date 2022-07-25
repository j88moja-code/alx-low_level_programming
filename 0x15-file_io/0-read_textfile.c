#include "main.h"

/**
  * read_textfile - reads a text file and prints it to the POSIX stdout.
  *
  * @filename: the name of the file to be printed.
  * @letters: number of letters that will be read and printed.
  *
  * Return: number of letters that could be read and printed or 0 on failure.
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int op, rd, wrt;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters + 1);
	if (!buffer)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, buffer, letters);
	wrt = write(1, buffer, rd);

	if (op == -1 || rd == -1 || wrt == -1)
		return (0);

	close(op);
	free(buffer);
	return (wrt);
}
