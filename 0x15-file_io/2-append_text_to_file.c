#include "main.h"

/**
  * append_text_to_file - appends text at the end of a file.
  *
  * @filename: pointer to the name of the file.
  * @text_content: pointer to a string to add to end of the file.
  *
  * Return: 1 on Success and 0 on failure.
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, writer, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	writer = write(fd, text_content, i);

	if (fd == -1 || writer == -1)
		return (-1);

	close(fd);
	return (1);
}
