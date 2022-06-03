#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char f;

	for (f = 'z'; f >= 'a'; f--)
	{
		putchar(f);
	}
	putchar('\n');
	return (0);
}
