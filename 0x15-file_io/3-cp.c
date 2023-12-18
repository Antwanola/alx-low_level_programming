#include "main.h"

int main(int argc, char **argv)
{
	char *file_to = argv[2];
	char *file_from = argv[1];
	int fd_to, fd_from;
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %S 
				file_from file_to\n", argv[0]);
		exit(97);
	}
	if (file_to != NULL)
	{
		fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, permissions);
		if (fd < 0)
		{
			close(fd);
			dprintf(STDERR_FILENO, ""
			return (98);
		}
	}

}
