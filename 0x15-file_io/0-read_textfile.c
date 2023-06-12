#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Function that Read the text file and print to STDOUT.
 * @filename: the text file being read
 * @letters: the number of letters to be read
 * Return: s the actual number of bytes that read and print
 * 0 when the function fails or filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t fd;
ssize_t s;
ssize_t t;

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buf = malloc(sizeof(char) * letters);
t = read(fd, buf, letters);
s = write(STDOUT_FILENO, buf, t);

free(buf);
close(fd);
return (s);
}
