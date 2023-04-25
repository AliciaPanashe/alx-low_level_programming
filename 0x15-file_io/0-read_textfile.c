#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters it 
 *            should read and print.
 *
 * Return:  0 If the file fails or filename is NULL
 *         otherwise - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t k, l, m;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	k = open(filename, O_RDONLY);
	l = read(k, buffer, letters);
	m = write(STDOUT_FILENO, buffer, l);

	if (k == -1 || l == -1 || m == -1 || m != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(k);

	return (m);
}
