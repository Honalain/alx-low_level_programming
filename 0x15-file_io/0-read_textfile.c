#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

/**
 * read_textfile - function that read a text and print it into POSIX
 * @filename: file to read and print
 * @letters: lettles in that file
 *
 * Return: returns the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file = open(filename, O_RDONLY);
	char *buffer = malloc(sizeof(char) * (letters + 1));
	ssize_t bytes_read = read(file, buffer, letters);
	ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (filename == NULL)
	{
		return (0);
	}

	if (file == -1)
	{
		return (0);
	}

	if (buffer == NULL)
	{
		close(file);
		return (0);
	}

	if (bytes_read == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}

	buffer[bytes_read] = '\0';

	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		close(file);
		return (0);
	}

	free(buffer);
	close(file);
	return (bytes_read);
}
