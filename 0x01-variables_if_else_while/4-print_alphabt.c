#include <stdio.h>
/**
 * main - Entry point
 *print alphabet except q and e
 *Return: is always 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
{
	if (c == 'q' || c == 'e')
	{

	continue;

	}
	putchar(c);
}
putchar('\n');
	return (0);
}
