#include  "simpleshell.h"

/**
  * func_read - function that reads the stdin
  * Return: line if succesful or NULL if failed
  */

char *func_read(void)
{
	char *line = NULL;
	size_t size = 0;
	ssize_t len = 0;

	len = getline(&line, &size, stdin);
	if (len == -1)
	{
		free(line);
		write(1, "\n", 1);
		return (0);
	}
	if (line[len - 1] == '\n' && line[1] != '\0')
	{
		line[len - 1] = '\0';
	}
	if (line[0] == '\0')
	{
		return (0);
	}
	return (line);
}
