#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file - function that append file at the end of the file
 * @filename: file in which text will be appended
 * @text_content: text content to be appended to the end of the file
 *
 * Return: -1 if the file is null or failure otherwise 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (1);
	}

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
	{
		return (-1);
	}

	bytes_written = write(file, text_content, strlen(text_content));

	if (bytes_written == -1)
	{

	close(file);
	return (-1);
	}

	close(file);
	return (1);
}
