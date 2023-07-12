#include "main.h"

/**
 * closeFile - closes a file descriptor
 * @file_desc: reference to the file in process
 */
void closeFile(int file_desc)
{
	int closed = close(file_desc);

	if (closed == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_desc);
		exit(100);
	}
}

/**
 * copy_to_file - copies the content of file to another
 * @fileNameFrom: file to be copied from
 * @fileNameTo: file to be copied to
 * Return: 1 on success and -1 on failure
 */
void copy_to_file(char *fileNameFrom, char *fileNameTo)
{
	int file_to, file_from, write_to, read_from;
	char buff[1024];

	file_from = open(fileNameFrom, O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fileNameFrom);
		exit(98);
	}
	file_to = open(fileNameTo, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fileNameTo);
		exit(99);
	}
	while ((read_from = read(file_from, buff, 1024)) > 0)
	{
		if (read_from == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fileNameFrom);
			exit(98);
		}
		write_to = write(file_to, buff, read_from);
		if (write_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fileNameTo);
			exit(99);
		}
	}
	closeFile(file_from);
	closeFile(file_to);
}

/**
 * main - Executes the code
 * @argc: argument count
 * @argv: list of args passed
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_to_file(argv[1], argv[2]);
	return (0);
}
