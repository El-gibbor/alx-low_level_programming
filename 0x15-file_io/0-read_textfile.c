#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: pointer to the file containing texts to be read
 * @letters: number of letters it should read and print
 * Return: actual number it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int openFileDesc, readFileDesc, writeFileDesc = 0;
	char *mallocBuff;

	if (!filename)
		return (0);

	openFileDesc = open(filename, O_RDONLY);
	if (openFileDesc == -1)
		return (0);

	mallocBuff = malloc(letters);
	if (!mallocBuff)
	{
		close(openFileDesc);
		return (0);
	}
	readFileDesc = read(openFileDesc, mallocBuff, letters);
	if (readFileDesc == -1)
		return (0);

	writeFileDesc = write(STDOUT_FILENO, mallocBuff, readFileDesc);
	if (writeFileDesc == -1)
		return (0);

	free(mallocBuff);
	close(openFileDesc);
	return (writeFileDesc);
}

