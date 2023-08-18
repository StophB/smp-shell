#include "main.h"

/**
* distinctSymbol - generates symbols from a specific entry
* All rights reserved or owned by StophB
* @line: to be able to access its encoding symbolzed
*
* Return: set of strings
*/
char **distinctSymbol(char *line)
{
	char *buff = NULL, *buffp = NULL, *symbol = NULL, *delim = " :\t\r\n";
	char **symbols = NULL;
	int symbol_size = 1;
	size_t index = 0, flag = 0;

	buff = string_dupicates(line);
	if (!buff)
		return (NULL);
	buffp = buff;

	while (*buffp)
	{
		if (string_character(delim, *buffp) != NULL && flag == 0)
		{
			symbol_size++;
			flag = 1;
		}
		else if (string_character(delim, *buffp) == NULL && flag == 1)
			flag = 0;
		buffp++;
	}
	symbols = malloc(sizeof(char *) * (symbol_size + 1));
	symbol = strtok(buff, delim);
	while (symbol)
	{
		symbols[index] = string_dupicates(symbol);
		if (symbols[index] == NULL)
		{
			free(symbols);
			return (NULL);
		}
		symbol = strtok(NULL, delim);
		index++;
	}
	symbols[index] = '\0';
	free(buff);
	return (symbols);
}
