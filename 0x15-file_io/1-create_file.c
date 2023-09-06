#include "main.h"
#include <stdio.h>
#include <unistd.h>


int create_file(const char *filename, char *text_content)
{
	int fd = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDONLY | O_WRONLY);
	if (fd <= 0)
	{
		close(fd);
		return (-1);
	}

}
