#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * create_file -creates a file
 * @filename: The filename to create
 * @text_content: A NULL terminated string
 *
 * Return: 1 on success, -1 if file can't be created
 */
int create_file(const char *filename, char *text_content)
{
	int fo, fw, len = 0;

	if (filename == NULL)
		return (-1);

	fo = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fo < 0)
		return (-1);

	while (text_content && *(text_content + len))
		len++;

	fw = write(fo, text_content, len);
	close(fo);
	if (fw < 0)
		return (-1);
	return (1);
}
