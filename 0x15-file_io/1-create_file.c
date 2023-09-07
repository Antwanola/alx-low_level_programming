#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>


/**
  * create_file- create file and write into it
  * @filename: the filename
  * @text_content: the content to write into file
  * Return: Return Int val
  */

int create_file(const char *filename, char *text_content)
{
	int fd = 0;
	int i = 0;
	ssize_t create_file;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
		create_file = write(fd, text_content, i);
		if (create_file == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
