#include "main.h"

/**
* _strstr - Locates the first occurrence of a substring
* @haystack: The main string to be searched
* @needle: The substring we are looking for
*
* Return: A pointer to the occurence of the substring in the main string
*/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *needle_cpy = needle;
		char *haystack_cpy = haystack;
		int flag = 0;

		while (*needle_cpy && *needle_cpy == *haystack_cpy)
		{
			flag = 1;
			haystack_cpy++;
			needle_cpy++;
		}
		if (*needle_cpy == '\0' && flag == 1)
			return (haystack);
		if (flag == 1)
		{
			haystack = haystack_cpy;
			continue;
		}
		haystack++;
	}

	return ('\0');
}

