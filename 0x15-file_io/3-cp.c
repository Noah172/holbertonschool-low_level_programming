#include "holberton.h"
/**
 * main - copies the content of a file to another file.
 * @argc: number of args
 * @argv: pointer to the args
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	char buffer[BSIZE];
	int rad, wrt, i, j;

	if (argc != 3)
	{dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	rad = open(argv[1], O_RDONLY);
	if (rad == -1)
	{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	wrt = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (wrt == -1)
	{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	do {
	i = read(rad, buffer, BSIZE);
	j = write(wrt, buffer, i);
	} while (i == BSIZE);
	if (i == -1)
	{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (j <= -1)
	{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (close(rad) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", rad), exit(100);
	if (close(wrt) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", wrt), exit(100);
	return (0);
}
