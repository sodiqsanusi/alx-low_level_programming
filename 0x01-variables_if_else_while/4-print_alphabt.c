#include <stdio.h>
/**
* main - Entry point for the C program
*
* Return: Always 0 (success)
*/
int main(void)
{
	int n;

	for (n = 97; n < 123; n++)
	{
		if (n == 101 || n == 113)
			continue;
		else
			putchar(n);
	}
	putchar(10);
	return (0);
}

