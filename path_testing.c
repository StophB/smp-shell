#include "main.h"

/**
* path_testing - checks whether path is valid
* All rights reserved or owned by StophB
* @cmd: The user made or entered the command
* @path: symbolzed
*
* Return: directed in order to succeed
*/
char *path_testing(char **path, char *cmd)
{
	int i = 0;
	char *output;

	while (path[i])
	{
		output = path_end(path[i], cmd);
		if (access(output, F_OK | X_OK) == 0)
			return (output);
		free(output);
		i++;
	}
	return (NULL);
}
