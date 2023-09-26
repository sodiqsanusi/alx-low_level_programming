#include "main.h"

/**
* _strpbrk - Searches a string for a set of bytes
* @s: The string that will be searched
* @accept: The set of bytes that are being searched for
*
* Return: A pointer to the first occurence of a found byte
*/
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *accept_cpy = accept;

		while (*accept_cpy)
		{
			if (*s == *accept_cpy)
				return (accept_cpy);
			accept_cpy++;
		}
		s++;
	}
	while (*accept)
	{
		if (*s == *accept)
			return (accept);
		accept++;
	}
	if (*s == *accept)
		return (accept);
	return ('\0');
}

