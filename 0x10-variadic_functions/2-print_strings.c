#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_strings - Prints strings that were provided as variadic params
* @separator: Used to act as delimiter in printed statement
* @n: The amount of strings provided as variadic params
*
* Return: "void" Nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *new_string = va_arg(args, char *);

		if (new_string == NULL)
			printf("(nil)");
		else
			printf("%s", new_string);

		if (((i + 1) != n) && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}

