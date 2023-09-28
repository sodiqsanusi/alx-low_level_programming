#include "main.h"

/**
* _print_rev_recursion - Prints a string in reverse, using recursion
* @s: The string to be printed in reverse
*
* Return: Nothing (void)
*/
void _print_rev_recursion(char *s)
{
	char *s_cpy = s;

	if (*s_cpy == '\0')
		return;
	s++;
	_print_rev_recursion(s);
	_putchar(*s_cpy);
}

