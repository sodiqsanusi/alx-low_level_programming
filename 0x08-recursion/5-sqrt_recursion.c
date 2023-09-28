#include "main.h"

/**
* checker - The main recursive check for roots
* @guess: The number to check if it's a root
* @base: The hopeful square of the guess
*
* Return: -1 if base does not have a root, the root otherwise
*/
int checker(int guess, int base)
{
	if (guess * guess == base)
		return (guess);
	if (guess * guess > base)
		return (-1);
	return (checker(guess + 1, base));
}

/**
* _sqrt_recursion - Gets the natural square root of a number, using recursion
* @n: The number that we are looking for its square root
*
* Return: An integer that holds the square root
*/
int _sqrt_recursion(int n)
{
	return (checker(1, n));
}

