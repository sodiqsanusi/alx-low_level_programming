#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_char - Prints a char param
* @args: The present variadic param list
*
* Return: "void" Nothing
*/
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
* print_int - Prints an int param
* @args: The present param list
*
* Return: "void" Nothing
*/
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
* print_float - Prints a float param
* @args: The present param list
*
* Return: "void" Nothing
*/
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
* print_string - Prints a string param
* @args: The present param list
*
* Return: "void" Nothing
*/
void print_string(va_list args)
{
	char *new_string = va_arg(args, char *);

	if (new_string == NULL)
		new_string = "(nil)";
	printf("%s", new_string);
}

/**
* print_all - Prints anything
* @format: A string containing the format of each variadic param
*
* Return: "void" Nothing
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	char *separator = "";
	va_list args;
	f_func format_functions[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && format[i])
	{
		int j = 0;

		while (j < 4)
		{
			if (format[i] == *format_functions[j].form)
			{
				printf("%s", separator);
				format_functions[j].function(args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}

	printf("\n");
}

