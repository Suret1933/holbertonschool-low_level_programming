#include "main.h"
#include <stdlib.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the value whose bit is to be set to 1
 * @index: position of the bit
 * Return: 1, or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);

	*n = *n | (1 << index);

	return (1);
}
