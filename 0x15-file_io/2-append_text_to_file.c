#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file to append to
 * @text_content: string to add at the end of file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int append_to_file, appendText, lenText = 0;

	if (!filename)
		return (-1);

	append_to_file = open(filename, O_WRONLY | O_APPEND);
	if (append_to_file == -1)
		return (-1);

	if (!text_content)
		return (-1);
	while (text_content[lenText]) /* len of str/text to append */
		lenText++;

	appendText = write(append_to_file, text_content, lenText);
	if (appendText == -1)
	{
		close(append_to_file);
		return (-1);
	}
	close(append_to_file);
	return (1);
}
