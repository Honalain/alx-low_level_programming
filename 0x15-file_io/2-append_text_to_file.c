#include <stdio.h>
#include <stdlib.h>
/**
 * append_text_to_file - function that append file at the end of the file
 * @filename: file in which text will be appended
 * @text_content: text content to be appended to the end of the file
 *
 * Return: -1 if the file is null or failure otherwise 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file = fopen(filename, "a");

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (-1);
	}

	if (file == NULL)
	{
		return (-1);
	}

	if (fputs(text_content, file) == EOF)
	{

	fclose(file);
	return (-1);
	}

	fclose(file);
	return (1);
}
