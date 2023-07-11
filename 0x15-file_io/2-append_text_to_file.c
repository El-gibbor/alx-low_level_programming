#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file to append to
 * @text_content: string to add at the end of file
 * Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
    int appendFile, appendText, lenText = 0;

    if (!filename)
        return (-1);
    
    appendFile = open(filename, O_WRONLY | O_APPEND);
    if (appendFile == -1)
        return (-1);
    
    if (!text_content)
		return (0);
	while (text_content[lenText]) /* len of str/text to append */
		lenText++;
    
    appendText = write(appendFile, text_content, lenText);
    if (appendText == -1)
    {
        close(appendFile);
        return (-1);
    }
    close(appendFile);
    return (1);
}