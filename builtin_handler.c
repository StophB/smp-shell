#include "main.h"

/**
* builtin_handler - implementation of built-in functions and handling it
* All rights reserved or owned by StophB
*
* @cmd: symbolzed commands
* @line: read input from stdin
* Return: 1 if executed, 0 if not
*/
int builtin_handler(char **cmd, char *line)
{
	struct builtin builtin = {"envi", "exit"};

	if (string_compares(*cmd, builtin.envi) == 0)
	{
		environment_print();
		return (1);
	}
	else if (string_compares(*cmd, builtin.exit) == 0)
	{
		leave_command(command, line);
		return (1);
	}
	return (0);
}
