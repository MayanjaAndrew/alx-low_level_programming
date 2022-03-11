#include <stdio.h>

/**
 * Main - prints all single digits numbers of base 10 starting frrom 0,
 * followed by a new line, using putchar
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
