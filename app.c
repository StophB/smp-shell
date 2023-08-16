#include "main.h"

/**
 *app- app commands used by users
 *All rights reserved or owned by StophB
 *
 *@cmd: command
 *@cp: chain from pointers to commands
 * Return: 0
 */
void app(char *cmd, char **cp)
{
	pid_t child_pid;
	int status;
	char **envi = environ;

	child_pid = fork();
	if (child_pid < 0)
		perror(cmd);
	if (child_pid == 0)
	{
		execve(cmd, cp, envi);
		perror(cmd);
		free(cmd);
		freesupplies(cp);
		exit(98);
	}
	else
		wait(&status);
}
