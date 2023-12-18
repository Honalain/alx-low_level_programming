#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

/**
 * create_file - function that create file
 * @filename: file to be created
 * @text_content: null
 * Return: 1 on success, -1 for failure
 */
int create_file(const char *filename, char *text_content)
{
	int file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (filename == NULL)
	{
		return (1);
	}
	if (text_content != NULL)
	{
		ssize_t bytes_written = write(file, text_content, strlen(text_content));

		if (bytes_written == -1)
		{
			close(file);
			return (-1);
		}

	}
	close(file);
	return (1);
}
