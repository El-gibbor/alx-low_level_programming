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
	char *mallocLetters;

	if (!filename)
		return (0);

	openFileDesc = open(filename, O_RDONLY);
	if (openFileDesc == -1)
		return (0);

	mallocLetters = malloc(letters);
	if (!mallocLetters)
	{
		close(openFileDesc);
		return (0);
	}
	readFileDesc = read(openFileDesc, mallocLetters, letters);
	if (readFileDesc == -1)
		return (0);

	writeFileDesc = write(STDOUT_FILENO, mallocLetters, letters);
	if (writeFileDesc == -1)
		return (0);

	free(mallocLetters);
	close(openFileDesc);
	return (writeFileDesc);
}

