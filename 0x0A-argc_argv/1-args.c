#include <stdio.h>

/**
* main - A program that prints the number of arguments passed to it
* @argc: The terminal argument count
* @argv: The arguments in a string array
*
* Return: Always 0 (success)
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

