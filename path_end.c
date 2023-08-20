#include "main.h"

/**
* path_end - path append it adds the path to the command directly
* All rights reserved or owned by StophB
*
* @cmd: the user entered the command
* @path: path command
* Return: the buffer that includes is on my track order on success
*/
char *pathend(char *path, char *cmd)
{
	char *buff;
	size_t i = 0, j = 0;

	if (cmd == 0)
		cmd = "";

	if (path == 0)
		path = "";

	buff = malloc(sizeof(char) * (string_length(path) + string_length(cmd) + 2));
	if (!buff)
		return (NULL);

	while (path[i])
	{
		buff[i] = path[i];
		i++;
	}

	if (path[i - 1] != '/')
	{
		buff[i] = '/';
		i++;
	}
	while (cmd[j])
	{
		buff[i + j] = cmd[j];
		j++;
	}
	buff[i + j] = '\0';
	return (buff);
}
