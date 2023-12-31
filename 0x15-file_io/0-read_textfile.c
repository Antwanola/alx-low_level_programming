#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
  * read_textfile- read textfile input
  * @filename: the file to be read
  * @letters: the number of letters to be displayed
  * Return: ssize_t
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int read_file, write_file;
	char *buffer = NULL;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = (char *)malloc(sizeof(char) * letters + 1);
	if (!buffer)
	{
		close(fd);
		return (0);
	}
	read_file = read(fd, buffer, letters);
	if (read_file == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	write_file = write(STDOUT_FILENO, buffer, read_file);
	if (write_file == -1  || write_file != read_file)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (read_file);
}
