#include "main.h"

/**
* leave_command - pivoting or dealing with an exit order
* All rights reserved or owned by StophB
*
* @line: Read input from stdin
* @cmd: symbolzed cmnds
* Return: no return
*/
void leave_command(char **cmd, char *line)
{
	free(line);
	free_supplies(cmd);
	exit(0);
}
