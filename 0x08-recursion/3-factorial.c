#include "main.h"

/**
* factorial - Returns the factorial of a number, using recursion
* @n: The number we want to get its factorial
*
* Return: An integer containing the factorial of the parameter given
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

