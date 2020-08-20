#include "holberton.h"

/**
 * shell_loop - loop into functions that runs the shell
 * @argv: commands passed to the CL
 * @env: environment variable
 * Return: status of the proccess or 1 in error
 */
int shell_loop(char **env)
{
	char *args = NULL;

	do {
		args = read_command(env);
	}
	while (1 == 1)
		;
	free(args);
	return (0);

}
