#include<stdio.h>
#include<string.h>
#include"main.h"

/*
 * binary_to_uint: converts a string of 0's and 1's to an unsigned integer
 * @param b: a pointer to a string of 0's and 1's
 * @return: an unsigned integer, or -1 on error
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned char result = 0;
	unsigned int i = 0;

switch (b[i])
{
	case '0':
	result += 1;
	break;
	case '1':
	result += 2;
	break;
	default:
	result = -1;
break;
}

if (i == strlen(b) - 1)
result = result - 1;
return (result);
}
