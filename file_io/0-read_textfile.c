#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 *read_textfile - read text
 *@filename: file name
 *@letters: letters
 *Return: success
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	ssize_t bytesRead;
	ssize_t bytesWritten;


	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	buffer = (char *)malloc(letters + 1);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	bytesRead = fread(buffer, sizeof(char), letters, file);
	fclose(file);

	if (bytesRead <= 0)
	{
		free(buffer);
		return (0);
	}

	buffer[bytesRead] = '\0';

	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	free(buffer);

	if (bytesWritten != bytesRead)
		return (0);

	return (bytesRead);
}

