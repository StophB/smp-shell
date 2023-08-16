#include "main.h"
/**
 *my_checker - checks to see what kind of weather, built-in function
 *All rights reserved or owned by StophB
 *@buff: the line derivative of the getline function
 *@cmd: symbolzed input user
 *Return: 1 if cmd excuted 0 if cmd is not executed
 */
int my_checker(char **cmd, char *buff)
{
	if (builtin_handler(cmd, buff))
		return (1);
	else if (**cmd == '/')
	{
		app(cmd[0], cmd);
		return (1);
	}
	return (0);
}
