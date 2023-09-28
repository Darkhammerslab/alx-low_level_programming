#include "main.h"
/**
 * clear_bit - set value of bit to 0 at given index
 * @n: pointer to number
 * @index: index
 * Return: 1 if success, -1 if failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
