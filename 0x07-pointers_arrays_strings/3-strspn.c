#include "main.h"
/**
 * _strspn - get length of a prefix substring
 * i: input
 * j: input
 * @s: string
 * @accept: string
 * count: input
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count = 0;

	for (i = 0; s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				count++;
		}
	}
	return (count);
}
