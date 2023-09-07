#include "main.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>


int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0, i = 0;
	ssize_t append_file = 0;

	if (!filename)
		return (-1);
	if (!text_content)
		return (1);
	while (text_content[i] != '\0')
		i++;
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	append_file = write(fd, text_content, i);
	if (append_file < 0)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
