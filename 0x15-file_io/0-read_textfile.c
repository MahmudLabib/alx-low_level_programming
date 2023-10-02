#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>

/**
 * read_textfile - reads a text file and prints
 * to the POSIX STDOUT
 * @filename: filename to open
 * @letters: number of letters to read and print
 *
 * Return: The number of letters read and printed, or 0 if failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fo, fr, fw;
	char *temp;

	temp = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	if (temp == NULL)
		return (0);
	fo = open(filename, O_RDONLY);
	if (fo < 0)
	{
		free(temp);
		return (0);
	}

	fr = read(fo, temp, letters);
	if (fr < 0)
	{
		free(temp);
		return (0);
	}
	fw = write(STDOUT_FILENO, temp, fr);
	free(temp);
	close(fo);

	if (fw < 0)
		return (0);
	return ((ssize_t)fw);
}
