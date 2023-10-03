#include <stdio.h>

/**
* main- Prints out all the arguments received from terminal
* @argc: Argument count
* @argv: Array of strings holding arguments
*
* Return: Always 0 (success);
*/
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);
	return (0);
}

