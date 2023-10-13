#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
/**
* struct format_function - A function linked with its respective format
* @form: A character that talks on the function to be chosen
* @function: The function to be used
*/
struct format_function
{
	char *form;
	void (*function)();
};

typedef struct format_function f_func;

/* Function Prototypes*/
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */

