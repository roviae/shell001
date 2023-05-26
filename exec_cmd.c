#include "main.h"
#include <unistd.h>

/**
 * exec_cmd - executes commands
 * @args: double pointer to args
 *
 * Return: void
 */
void exec_cmd(char **args)
{
	pid_t child = fork();
	int status;

	if (strcmp(args[0], "exit") == 0)
	{
		exit(0);
	}
	if (strcmp(args[0], "env") == 0)
	{
		print_env();
	}
	if (child < 0)
	{
		perror(args[0]);
	}
	else if (child == 0)
	{
		if (execve(args[0], args, environ) == -1)
		{
			perror(args[0]);
			_exit(1);
		}
	}
	else
	{
		waitpid(child, &status, 0);
	}
}
