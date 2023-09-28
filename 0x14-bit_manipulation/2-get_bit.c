#include "main.h"
/**
 * get_bit - return value of a bit at given index
 * @n: number
 * @index: index
 * Return: value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;
	return (bit);
}
