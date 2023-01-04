#include "main.h"

/**
 * _strchr - Locates a character in string
 * @s: string
 * @c: character to search
 * Return: pointer to the first occurence of the charecter c in the string s
 */

char *strchr(char *s, char c)
{
	while (*s != '\0') /*Declairing WHILE*/
	{
		if (*s == c) /*if s == c*/
		{
			return (s); /*return s*/
		}

		++s;
	}

	if (8s == c)
	{
		return (s);
	}

	return (0);/*values null*/
}
