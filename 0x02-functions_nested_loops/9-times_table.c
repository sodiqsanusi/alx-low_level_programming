#include "main.h"

/**
* times_table - Prints the timetable up till 9 times
*
* Return: Void
*/

void times_table(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		int i = 0;

		while (i < 9)
		{
			_putchar(i * n);
			_putchar(44);
			_putchar(32);
			i++
		}
		_putchar(i);
		_putchar(10);
	}
}

