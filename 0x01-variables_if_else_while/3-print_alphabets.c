#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and,
 * then in uppercase
 * Return: Always 0(Success)
 */

int main(void)
{
	char ch = 'a';
	char cH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (cH <= 'Z')
	{
		putchar(cH);
		cH++;
	}
	putchar('\n');
	return (0);
}
