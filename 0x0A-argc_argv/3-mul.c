#include <stdio.h>
#include <stdlib.h>

/**
* main - Multiplies two numbers received from terminal
* @argc: Argument count from terminal
* @argv: Array of strings containing arguments
*
* Return: 1 if argument count is less than 3, 0 otherwise
*/
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

