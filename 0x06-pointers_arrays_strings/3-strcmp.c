#include "main.h"

/**
* _strcmp - Compares two strings
* @s1: The first string
* @s2: The second string
*
* Return: 0 if equal, <0 if s1 is higher than s2 & >0 otherwise
*/
int _strcmp(char *s1, char *s2)
{
	int char_check;

	for (char_check = 0; s1[char_check] != '\0'; char_check++)
	{
		if (s1[char_check] == s2[char_check])
			continue;
		else
		{
			if (s1[char_check] > s2[char_check])
				return (1);
			else
				return (-1);
		}
	}
	if (s2[char_check] != '\0')
		return (-1);
	return (0);
}

