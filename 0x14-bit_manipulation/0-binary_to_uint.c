#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include"main.h"

/*
 * binary_to_uint: converts a string of 0's and 1's to an unsigned integer
 * @param b: a pointer to a string of 0's and 1's
 * @return: an unsigned integer, or -1 on error
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
