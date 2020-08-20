#include "holberton.h"
/**
 * printenv - prints the environment
 * @env: environment variable
 * Return: Always 0 in success. Otherwise 1.
 */
void printenv(char **env)
{
	unsigned int runner;
	unsigned int lenght;
        unsigned int i;

        if (argv[1] != NULL)
        {
                return (127);
        }
	if (environ == NULL || *environ[0] == '\0')
		return;
	environ = env;
	runner = 0;
	while (environ[runner] != NULL)
	{
		lenght = _strlen(environ[runner]);
		write(STDOUT_FILENO, environ[runner], lenght);
		write(STDOUT_FILENO, "\n", 1);
		runner++;
	}
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
