#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print base 10 single digit numbers using putchar'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
