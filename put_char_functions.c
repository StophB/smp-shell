#include "main.h"

/**
* _putchar - registers the character c to stdout
* All rights reserved or owned by StophB
*
* @c: character to be written
* Return: success 1
* For the moment of the error, -1 is returned and errno is set appropriately
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* string_prints - string is printed
* All rights reserved or owned by StophB
*
* @str: assortment to be printed
* Return: charachters number printed
*/
int string_prints(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	return (i);
}
