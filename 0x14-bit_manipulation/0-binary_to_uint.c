#include "main.h"

/**
* binary_to_uint - Converts a binary no. to a decimal number
* @b: "const char *" The binary number to be converted
*
* Return: "unsigned int" The number in decimal format
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimalNum = 0;
	int iterator = 0;

	if (!b)
		return (0);
	for (iterator = 0; b[iterator]; iterator++)
		;
	iterator--;
	while (iterator >= 0)
	{
		int intBit = *b - 48;
		unsigned int decimalCounterPart;

		if (intBit != 1 && intBit != 0)
			return (0);
		decimalCounterPart = (intBit << iterator);
		decimalNum += decimalCounterPart;
		b++;
		iterator--;
	}

	return (decimalNum);
}

