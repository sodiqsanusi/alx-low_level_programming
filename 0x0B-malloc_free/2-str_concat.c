#include <stdlib.h>

/**
* str_concat - A function that concatenates two strings
* @s1: The first string
* @s2: The second string
*
* Return: A pointer to the concatenated string
*/
char *str_concat(char *s1, char *s2)
{
	int s1_length, s2_length, iterator = 0;
	char *c_string;

	for (s1_length = 0; s1[s1_length] != '\0'; s1_length++)
		;
	for (s2_length = 0; s2[s2_length] != '\0'; s2_length++)
		;

	c_string = (char *)malloc(sizeof(char) * (s1_length + s2_length + 1));

	if (c_string == NULL)
		return (NULL);

	while (*s1 && (s1 != NULL))
	{
		c_string[iterator] = *s1;
		iterator++;
		s1++;
	}
	while (*s2 && (s2 != NULL))
	{
		c_string[iterator] = *s2;
		iterator++;
		s2++;
	}
	c_string[iterator] = '\0';

	return (c_string);
}

