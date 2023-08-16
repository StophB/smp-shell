#include "main.h"

/**
 *app- app commands used by users
 *All rights reserved or owned by StophB
 *
 *@cmd: command
 *@cp: the chain from pointers to commands
 * Return: 0
 */
void app(char *cp, char **cmd)
{
	pid_t child_pid;
	int status;
	char **envi = environ;

	child_pid = fork();
	if (child_pid < 0)
		perror(cmd);
	if (child_pid == 0)
	{
		execve(cp, cmd, envi);
		perror(cp);
		free(cp);
		free_supplies(cmd);
		exit(98);
	}
	else
		wait(&status);
}
