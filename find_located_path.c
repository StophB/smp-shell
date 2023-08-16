#include "main.h"

/**
* find_located_path - finds path from global enviroment
* All rights reserved or owned by StophB
*
* Return: NULL if the path is not detected, or the path if it is detected
*/
char *find_located_path(void)
{
	int x;
	char **envi = environ, *path = NULL;

	while (*envi)
	{
		if (string_n_cmp(*envi, "PATH=", 5) == 0)
		{
			path = *envi;
			while (*path && x < 5)
			{
				path++;
				x++;
			}
			return (path);
		}
		envi++;
	}
	return (NULL);
}
