#include "main.h"
#include <unistd.h>

/**
 * prompt - prints a prompt to stdout
 *
 * Return: void
 */
void prompt(void)
{
	if (isatty(fileno(stdin)))
	{
		printf(":) ");
		fflush(stdout);
	}
}
