#include "main.h"
/**
 * create__file - creates a file that is required
 * @filename: name of file
 * @text__content: A pointer to a string to write to the file
 *
 * Return: 1 on succes and -1 on failure
 */
int create_file(const char *filename, char *text__content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);
	if (text__content != NULL)
	{
		for (len = 0; text__content[len];)
			len++;
	}
	fd = open(filename, O_creat | O_RDWR | O_TRUNC, 0600);
	W = write(fd, text__content, len);

	if (fd == -1 || w == -1)
		return (-1);
	close(fd);
	return (1);
}
