#include "main.h"

/**
* _pow_recursion - Returns the value of "x" raised to power "y"
* @x: The base number
* @y: The power
*
* Return: An integer containing the answer
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

