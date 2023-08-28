#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @a: string
 * @s: string
 * @count: input
 * Return: number of bytes 
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s)
	{
		char *a = accept;
	
		while (*a)
		{
			if (*s == *a)
			{
				count++;
				break;
			}
			a++;
		}
		if (*a == '\0')
			break;
		s++;
	}
	return (count);
}
