#include "main.h"

/**
 * print_env - prints environment variable
 *
 * Return: void
 */
void print_env(void)
{
	char **env = environ;
	int i = 0;

	while (*env != NULL)
	{
		printf("%s\n", env[i]);
		i++;
	}

}
