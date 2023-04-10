#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to stdout.
 * @filename: The name of the text file to read.
 * @letters: The number of letters to read.
 *
 * Return: The number of bytes read and printed, or 0 if the function fails or
 *         the filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t fd, w, t;

if (!filename)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buf = malloc(sizeof(char) * letters);
if (!buf)
return (0);

t = read(fd, buf, letters);
w = write(STDOUT_FILENO, buf, t);
if (w == -1)
return (0);

free(buf);
close(fd);
return (w);
}
