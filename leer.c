#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *read_textfile - Function that read a file
 *@filename: pointer to file
 *@letters: size of text
 * Return: 0
 */
char *read_textfile(const char *filename, ssize_t val)
{
	int fd, lector;
	char *buff_de_mier;

	buff_de_mier = malloc(sizeof(char) * val);
	if (buff_de_mier == NULL)
	{
		return (0);
	}

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff_de_mier);
		return (0);
	}

	lector = read(fd, buff_de_mier, val);
	if (lector == -1)
	{
		free(buff_de_mier);
		return (0);
	}
	
	close(fd);
	return (buff_de_mier);

}
