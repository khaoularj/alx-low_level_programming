#include "main.h"

/**
 *read_textfile - the function that reads a text file and
 *prints it to the POSIX standard output
 *@filename:pointer to a character array.
 *@letters: number of letters it should read and print
 *Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = NULL;
	int file;
	ssize_t rd;
	ssize_t wr;

	if (filename == NULL)
	{
		return (0);
	}
	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	rd = read(file, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	free(buffer);
	close(file);
	return (wr);
}


