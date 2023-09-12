#include "main.h"

/**
* _abs - Prints the absolute value of a given parameter
* @n: The integer whose absolute value will be printed
*
* Return: Always 0 (success)
*/

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	_putchar(n);
}

