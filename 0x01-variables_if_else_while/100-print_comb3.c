#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print combinations of two digits'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tens;
	int ones;

	for (tens = 48; tens <= 57; tens++)
	{
		putchar(tens);
		tens++;
	}
	for (ones = 48; ones <= 57; ones++)
	{
		putchar(ones);
		ones++;
	}
	putchar(',');
	putchar(' ');
	putchar('\n');
	return (0);
}
