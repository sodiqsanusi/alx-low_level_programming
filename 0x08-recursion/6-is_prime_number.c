#include "main.h"

/**
* checker - The main recursive function that checks for prime
* @tester: a number that is used to divide against the possible prime as a test
* @n: The possible prime
*
* Return: 1 if input "n" is a prime, 0 otherwise
*/
int checker(int tester, int n)
{
	if ((n % tester == 0) || n < 2)
		return (0);
	else if (tester + 1 == n)
		return (1);
	else if (n > tester)
		return (checker(tester + 1, n));
	return (1);
}

/**
* is_prime_number - Checks if input is a prime number
* @n: The number to be checked
*
* Return: 1 if num is a prime number, 0 otherwise
*/
int is_prime_number(int n)
{
	return (checker(2, n));
}

