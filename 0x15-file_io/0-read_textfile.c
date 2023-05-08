#include "main.h"
/**
 * read_textfile - read a textfile.
 * @filename: name of the file to open.
 * @letters: number of letters to print in the standar ouput.
 *
 * Return: number of letter printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bf_letters;
        int fd_open, fd_read, count_char;

	if (filename == NULL)
		return (0);
	fd_open = open(filename, O_RDONLY);
	if (fd_open == -1)
		return (0);
	bf_letters = malloc(sizeof(char) * letters);
	if (bf_letters == NULL)
		return (0);
	fd_read = read(fd_open, bf_letters, letters);
	if (fd_read == -1)
	{
		free(bf_letters);
		return (0);
	}
	count_char = write(STDOUT_FILENO, bf_letters, fd_read);
	if (count_char == -1)
	{
		free(bf_letters);
		return (0);
	}
	close(fd_open);
	free(bf_letters);
	return (count_char);
}

