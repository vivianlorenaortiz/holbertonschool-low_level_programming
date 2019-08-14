#include "holberton.h"
/**
 *_strlen - Finds the lenght of a string.
 *@str: pointer to the string.
 *
 *Return: lenght of the string.
 */
size_t _strlen(char *str)
{
	size_t i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}
/**
 *create_file - creates a file.
 *@filename: name of the file to creat.
 *@text_content: Is a NULL terminated string to write to the file.
 *Return: 1 on sucess, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t leng;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		leng = write(fd, text_content, _strlen(text_content));

	close(fd);
	if (leng == -1)
		return (-1);
	return (1);
}
