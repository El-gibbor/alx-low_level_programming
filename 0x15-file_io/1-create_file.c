#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: string to be written to the file
 * Return: 1 on sucess on failure
 */
int create_file(const char *filename, char *text_content)
{
	int writeNewFile, len = 0, newFile;

	if (!filename)
		return (-1);
	newFile = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (newFile == -1)
		return (-1);

	if (!text_content)
		text_content = "";
	if (text_content != NULL)
	{
		while (text_content[len]) /* length of the string */
			len++;
	}
	writeNewFile = write(newFile, text_content, len);
	if (writeNewFile == -1)
	{
		close(newFile);
		return (-1);
	}
	close(newFile);
	return (1);
}
