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
	int flag = 1;

	while (*str_cpy)
	{
		if ((*str_cpy == ' ') || (*str_cpy == '\t') || (*str_cpy == '\n')
			|| (*str_cpy == ',') || (*str_cpy == ';') || (*str_cpy == '.')
			|| (*str_cpy == '!') || (*str_cpy == '?') || (*str_cpy == '"')
			|| (*str_cpy == '(') || (*str_cpy == ')') || (*str_cpy == '{')
			|| (*str_cpy == '}'))
		{
			flag = 1;
			str_cpy++;
			continue;
		}
		if ((flag == 1) && (*str_cpy >= 'a') && (*str_cpy <= 'z'))
		{
			*str_cpy -= 32;
			flag = 0;
		}
		if ((flag == 0) && (*str_cpy >= 'A') && (*str_cpy <= 'Z'))
			*str_cpy += 32;
		str_cpy++;
	}
	return (str);
}

