#include "main.h"


/**
  * append_text_to_file- append file
  * @filename: the file to be appended
  * @text_content: the text context
  * Return: int of the appended
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t text_len, write_file;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content != NULL)
	{
		text_len = strlen(text_content);
		write_file = write(fd, text_content, text_len);
		if (write_file < 0)
		{
			close(fd);
			return (-1);
		}

	}
	close(fd);
	return (1);
}
