#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - A function that appends
 * @filename: The filename
 * @text_content: The text
 * Return: 1 on success, -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdo, fdw, len = 0;

	if (filename == NULL)
		return (-1);

	fdo = open(filename, O_RDWR | O_APPEND);
	if (fdo < 0)
		return (-1);
	if (text_content == NULL)
	{
		close(fdo);
		return (1);
	}

	while (*(text_content + len))
		len++;

	fdw = write(fdo, text_content, len);
	close(fdo);
	if (fdw < 0)
		return (-1);

	return (1);
}
