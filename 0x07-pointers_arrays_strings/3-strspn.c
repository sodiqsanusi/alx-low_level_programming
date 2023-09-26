#include "main.h"

/**
* _strspn - Gets the length of a prefix substring
* @s: The main string from which we will get the substring length
* @accept: The substring we want to get its length
*
* Return: An integer with the length of the substring
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int flag = 1;

	while (*s && flag == 1)
	{
		while (*accept)
		{
			if (*s == *accept)
			{
				length++;
				break;
			}

		}	
	}
}

