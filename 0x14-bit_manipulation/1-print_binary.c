#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>

/**
* print_binary: Prints the binary representation of the number n
*
* n: The number to be printed in binary format.
*
* Output: A string representing the binary equivalent of n.
*
* Algorithm:
* - iterate over each bit in n
* - if the current bit is 1, print a "1"
* - if the current bit is 0, print a "0"
*
* Returns: Nothing
*/

void print_binary(unsigned long int n) 
{
	if (n == 0)
{
	write(1, "0", 1);
	return;
}

unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (mask > 0)
{
	if (n & mask)
	write(1, "1", 1);
	else
	write(1, "0", 1);
	mask >>= 1;
}
}
