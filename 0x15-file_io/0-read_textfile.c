#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>


/**
  * read_textfile- reads texfile and return bytes read
  * @filename: filename
  * @letters: numbers of letters to read
  * Return: size_t;
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp = 0;
	char *buffer = NULL;
	int read_file;
	int write_file;

	if (!filename)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	buffer = malloc(letters);
	if (!buffer)
	{
		close(fp);
		return (0);
	}
	read_file = read(fp, buffer, letters);
	if (read_file == -1)
	{
		free(buffer);
		close(fp);
		return (0);
	}
	write_file = write(STDOUT_FILENO, buffer, read_file);
	if (write_file == -1 || write_file != read_file)
	{
		free(buffer);
		close(fp);
		return (0);
	}
	free(buffer);
	close(fp);
	return (read_file);


}
