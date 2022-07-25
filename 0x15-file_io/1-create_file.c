#include "main.h"

/**
  * create_file - creates the file.
  *
  * @filename: pointer to the name of the file to be created.
  * @text_content: pointer to the  string to be written to the file.
  *
  * Return: 1 on Success and 0 on failure.
  */

int create_file(const char *filename, char *text_content)
{
	int fd, i = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
	while (text_content[i])
		i++;
	if (!text_content)
	{
		close(fd);
		return (-1);
	}
	else
	{
		write(fd, text_content, i);
	}

	close(fd);
	return (1);
}
