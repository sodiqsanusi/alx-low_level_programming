#include "main.h"

/**
* cap_string - Capitalizes all words of a string
* @str: String to be modified (Capitalized)
*
* Return: Pointer to the modified string
*/
char *cap_string(char *str)
{
	char *str_cpy = str;
	int flag = 0;

	while (*str_cpy)
	{
		if ((*str_cpy == 32) || (*str_cpy == 9) || (*str_cpy == 10)
			|| (*str_cpy == 44) || (*str_cpy == 59) || (*str_cpy == 46)
			|| (*str_cpy == 33) || (*str_cpy == 63) || (*str_cpy == 34)
			|| (*str_cpy == 40) || (*str_cpy == 41) || (*str_cpy == 123)
			|| (*str_cpy == 125))
		{
			flag = 1;
			str_cpy++;
			continue;
		}
		if (flag == 1)
		{
			*str_cpy -= 32;
			flag = 0;
		}
		str_cpy++;
	}
	return (str);
}

