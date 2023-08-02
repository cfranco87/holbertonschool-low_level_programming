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
	if (filename == NULL)
		return (0);

	FILE *file;

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);


	char *buffer;

	buffer = (char *)malloc(letters + 1);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	ssize_t bytesRead;

	bytesRead = fread(buffer, sizeof(char), letters, file);
	fclose(file);

	if (bytesRead <= 0)
	{
		free(buffer);
		return (0);
	}

	buffer[bytesRead] = '\0';

	ssize_t bytesWritten;

	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	free(buffer);

	if (bytesWritten != bytesRead)
		return (0);

	return (bytesRead);
}

