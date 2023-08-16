#include "main.h"

/**
* free_supplies - free supplies
* All rights reserved or owned by StophB
*
* @buff: buffer to be released
* Return: no return
*/
void free_supplies(char **buff)
{
	int i = 0;

	if (!buff || buff == NULL)
		return;
	while (buff[i])
	{
		free(buff[i]);
		i++;
	}
	free(buff);
}
