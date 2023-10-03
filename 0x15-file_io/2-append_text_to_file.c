#include "main.h"

/**
 * append_text_to_file - appends text to end of file
 * @filename: naem of file
 * @text_content: text content to append
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, write_status;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
