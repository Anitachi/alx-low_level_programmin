#include "main.h"
/**
 * print_alphabet - print 10 times in lower case
 * Return: is always 0
 */

void print_alphabet_x10(void)
{
	int f;
	char c;

	for (f = 0; f < 10; f++)
	{
		for (c = 'a'; c = 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
