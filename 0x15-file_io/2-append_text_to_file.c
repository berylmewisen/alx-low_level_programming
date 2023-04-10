#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * append_text_to_file - appends text to a file
 * @filename: name of the file
 * @text_content: text appended to file
 * Return: 1 on success -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;
	int i = 0;

	if (filename == NULL)
		return (-1);
	if (strcmp(text_content, "") == 0)
	fp = fopen(filename, "a");

	if (fp == NULL)
		return (-1);
	while (text_content[i] != '\0')
	{
		putc(text_content[i], fp);
		i++;
	}
	fclose(fp);
	return (1);
}
