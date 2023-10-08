#include <stdlib.h>

/**
* string_nconcat - Concatenates two strings, with a limit
* @s1: Main string
* @s2: Second string to be added to main string
* @n: The amount of bytes from "s2" that can be joined with "s1"
*
* Return: A pointer to the address of the concatenated string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string;
	int s1_length = 0;
	unsigned int count = 0;

	if (s1 != NULL)
	{
		for (s1_length = 0; s1[s1_length]; s1_length++)
			;
	}

	new_string = malloc(sizeof(char) * (s1_length + n + 1));
	if (new_string == NULL)
		return (NULL);

	while (s1 && *s1)
	{
		*new_string = *s1;
		new_string++;
		s1++;
	}
	while (s2 && *s2 && (count <= n))
	{
		*new_string = *s2;
		new_string++;
		s2++;
		n++;
	}
	*new_string = '\0';

	return (new_string);
}

