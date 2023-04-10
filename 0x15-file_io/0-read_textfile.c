#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: number of letters read and printed, 0 if an error occurs
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, nread, nwritten, total = 0;
char *buf;

if (filename == NULL)
return (0);

buf = malloc(letters * sizeof(char));
if (buf == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
{
free(buf);
return (0);
}

nread = read(fd, buf, letters);
if (nread == -1)
{
free(buf);
close(fd);
return (0);
}

nwritten = write(STDOUT_FILENO, buf, nread);
if (nwritten == -1 || nwritten != nread)
{
free(buf);
close(fd);
return (0);
}

total += nwritten;

free(buf);
close(fd);

return (total);
}

