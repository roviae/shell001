#include "main.h"

/**
 * parse_args - parses args
 * @buff: is pointer to buff
 * @args: double pointer to arguments
 *
 * Return: number of args parsed
 */
int parse_args(char *buff, char **args)
{
	char *token = strtok(buff, " \t\n");
	int num_args = 0;

	while (token != NULL)
	{
		args[num_args] = token;
		token = strtok(NULL, " \t\n");
		num_args++;
	}
	args[num_args] = NULL;

	return (num_args);
}
