#include "main.h"
#include <unistd.h>
#include <sys/stat.h>
#include <string.h>
#include <stddef.h>

/**
  * create_file- create file
  * @filename: the filename to be created
  * @text_content: the text to be copied in file
  * Return: integer for return status
  */


int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t text_len, write_byte;
	mode_t  perm = S_IRUSR | S_IWUSR;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, perm);
	if (fd < 0)
		return (-1);
	if (text_content != NULL)
	{
		text_len = strlen(text_content);
		write_byte = write(fd, text_content, text_len);
		if (write_byte < 0)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
