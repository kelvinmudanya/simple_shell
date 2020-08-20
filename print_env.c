#include "holberton.h"

/**
 * printenv - prints the environment
 * @env: environment variable
 * @argv: arguments passed
 * Return: Always 0 in success. Otherwise 1.
 */
int printenv(char **env, char **argv)
{
	unsigned int i;

	if (argv[1] != NULL)
	{
		return (-1);
	}
	if (!env)
		return (-1);
	for (i = 0; env[i] != NULL; i++)
	{
		print_string(env[i]);
		write(STDOUT_FILENO, "\n", 1);
	}
	return (0);
}
/**
 *  print_string - auxiliar function to print each linea of env
 * @env: environment variable passed from printenv
 * Return: void
 */
void print_string(char *env)
{
	int i, print;

	for (i = 0; env[i] != '\0'; i++)
		;
	print = write(STDOUT_FILENO, env, i);
	if (print == EOF)
		return;
}
