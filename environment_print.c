#include "main.h"

/**
* environment_print - prints environment mix to stdout
* All rights reserved or owned by StophB
* Return: nothing 0
*/
void environment_print(void)
{
	int x = 0;
	char **envi = environ;

	while (envi[x])
	{
		write(STDOUT_FILENO, (const void *)envi[x], string_length(envi[x]));
		write(STDOUT_FILENO, "\n", 1);
		x++;
	}
}
