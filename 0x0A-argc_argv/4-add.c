#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - Calculates the sum of numbers given as arguments
* @argc: Argument count from terminal
* @argv: Array of strings containing arguments
*
* Return: 1 if unsuccessful, 0 otherwise
*/
int main(int argc, char *argv[])
{
	int count, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (count = 1; count < argc; count++)
	{
		int i;

		for (i = 0; argv[count][i] != '\0'; i++)
		{
			if (!isdigit(argv[count][i]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[count]);
	}
	printf("%d\n", sum);
	return (0);
}

