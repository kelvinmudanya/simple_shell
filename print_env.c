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

        if (environ == NULL || *environ[0] == '\0')
                return;

        environ = env;
        runner = 0;
        while (environ[runner] != NULL)
        {
<<<<<<< HEAD
                lenght = _strlen(environ[runner]);
                write(STDOUT_FILENO, environ[runner], lenght);
                write(STDOUT_FILENO, "\n", 1);
                runner++;
=======
		perror(argv[0]);
                return (127);
>>>>>>> cb0547de04dedd417ca9153e6d051e28dbebfd78
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
