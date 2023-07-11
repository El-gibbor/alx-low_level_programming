#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: string to be written to the file
 * Return: 1 on sucess on failure
*/
int create_file(const char *filename, char *text_content)
{
    int writeNewFile, len, newFile;

    while (text_content[len] && text_content) /* length of the string */
        len++;

    if (!newFile)
        return (-1);

    newFile = open(filename, O_RDONLY | O_TRUNC | O_CREAT, 0600);
    if (newFile == -1)
        return (0);
    
    writeNewFile = write(newFile, text_content, len)
}