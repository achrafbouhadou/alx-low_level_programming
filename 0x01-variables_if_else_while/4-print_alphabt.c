#include <stdio.h>

/**
 * main - print the alphabet in lower case, except q and e,
 * followed by new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char f;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if(ch != q && ch != e )
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
