#include "main.h"

/**
 * create_file - Creates a file with the given filename & write tct content
 * @filename: name of file
 * @text_content: content to write to the file
 *
 * Return: 1 on sucess, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len, write_status;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	for (len = 0; text_content[len]; len++)
		;

	write_status = write(fd, text_content, len);

	if (write_status == -1 || write_status != len)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
