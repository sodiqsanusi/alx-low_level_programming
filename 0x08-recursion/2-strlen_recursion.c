#include "main.h"

/**
* _strlen_recursion - Calculates the length of a string, using recursion
* @s: The string whose length will be calculated
*
* Return: An integer showing the length
*/
int _strlen_recursion(char *s)
{
	int n = 1;

	if (*s == '\0')
		return (0);
	s++;
	return (n + _strlen_recursion(s));
}

