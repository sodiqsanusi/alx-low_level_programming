#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - Sums all variadic params of a function
* @n: The length of the variadic params
*
* Return: "int" Sum of the variadic parameters
*/
int sum_them_all(const unsigned int n, ...)
{
	int result = 0;
	unsigned int i;
	va_list args;

	va_start(args, n);
	if (n < 1)
		return (0);

	for (i = 0; i < n; i++)
		result += va_arg(args, int);

	va_end(args);
	return (result);
}

