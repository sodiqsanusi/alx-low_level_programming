#include "main.h"

/**
* _abs - Prints the absolute value of a given parameter
* @n: The integer whose absolute value will be printed
*
* Return: Always 0 (success)
*/

void _abs(int n)
{
	if (n < 0)
		_putchar(n * -1);
	else
		_putchar(n);
	return (0);
}

