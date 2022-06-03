#include <stdio.h>

/**
 * main - print the alphabet in lower case, except q and e,
 * followed by new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char f;

	for (f = 'a'; f <= 'z'; f++)
	{
		if(f != q && f != e )
		{
			putchar(f);
		}
	}
	putchar('\n');
	return (0);
}
