#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_numbers - Prints numbers which are variadic params
* @separator: A string holding a print separator, or "NULL"
* @n: Number of integers passed as variadic params
*
* Return: "void" Nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int gotten_num = va_arg(args, int);

		printf("%d", gotten_num);
		if (((i + 1) != n) && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}

