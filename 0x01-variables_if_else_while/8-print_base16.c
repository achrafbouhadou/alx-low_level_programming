#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char f;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (f = 'a'; f <= 'f'; f++)
	{
		putchar(f);
	}
	putchar('\n');
	return (0);
}
