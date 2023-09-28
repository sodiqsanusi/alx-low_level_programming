#include "main.h"
/**
* _puts_recursion - Prints a string, using recursion
* @s: The string to be printed to the terminal
*
* Return: Nothing (Void)
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}

