#include "holberton.h"
/**
 *read_textfile - read the content of a file
 *@filename: the name of the file
 *@letters: the number of letters it should read and print
 *Return: the actual number of letters it could read and print or 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int pa = 0;
	char *par;
	ssize_t le = 0, es = 0;

	if (filename == NULL)
	{
		return (0);
	}
	pa = open(filename, O_RDONLY, 0600);
	if (pa == -1)
	{
		return (0);
	}
	par = malloc(letters);
	if (par == NULL)
	{
		return (0);
	}
	le = read(pa, par, letters);
	if (le == -1)
	{
		free(par);
		close(pa);
		return (0);
	}
	es = write(1, par, le);
	if (es == -1 || es != le)
	{
		free(par);
		close(pa);
		return (0);
	}
	free(par);
	close(pa);
	return (es);
}
