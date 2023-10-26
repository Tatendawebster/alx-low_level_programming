#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include"main.h"

/**
 * binary_to_uint - converts a string to a decimal
 * @b: a character to a pointer
 * Return - the converted decimal (output)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int i;

	if (b == NULL)
	return (0);

	for (i = 0; b[i] != '\0'; i++)
{
	if (b[i] != '0' && b[i] != '1')
	return (0);

	decimal = decimal * 2 + (b[i] - '0');
}

return (decimal);
}
