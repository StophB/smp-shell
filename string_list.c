#include "main.h"

/**
* string_character - specifies the location of a char in a string
* All rights reserved or owned by StophB
*
* @c: identify the char location
* @str: string being checked
* Return: re-signal to the first occurrence of the character
* Or a NULL operation if the character is not detected
*/
char *string_character(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (str);
		s++;
	}
	if (!c)
		return (str);
	return (NULL);
}

/**
* string_length - retrieve length of string
* All rights reserved or owned by StophB
*
* @str: string traversal
* Return: length of string return of string traversal
*/
int string_length(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

/**
* string_compares - it does a comparison between two strings
* All rights reserved or owned by StophB
*
* @str1: paired with str2;
* @str2: paired with str1;
* Return: Retrieve the difference between the strings
*/
int string_compares(char *str1, char *str2)
{
	int i = 0, output;

	while (*(str1 + i) == *(str2 + i) && *(str1 + i) != '\0')
		i++;

	output = (*(str1 + i) - *(str2 + i));

	return (output);
}

/**
* string_dupicates - repeated string
* All rights reserved or owned by StophB
*
* @s: redundant
* Return: string recursive guide
*/
char *string_dupicates(char *str)
{
	char *ptr;
	int i, leng;

	if (s == NULL)
		return (NULL);

	leng = string_length(str);

	ptr = malloc(sizeof(char) * (leng + 1));
	if (!ptr)
		return (NULL);
	for (i = 0; *str != '\0'; str++, i++)
		ptr[i] = str[0];

	ptr[i++] = '\0';
	return (ptr);
}

/**
* string_n_cmp - performs an operation comparing two strings of up to n bytes
* All rights reserved or owned by StophB
* @str1: paired with str2
* @str2: paired with str1
* @n: number of bytes
*
* Return: Retrieve the difference between str1 and also str2
*/
int string_n_cmp(char *str1, char *str2, int n)
{
	int i;

	for (i = 0; str1[i] && str2[i] && i < n; i++)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
	}
	return (0);
}
