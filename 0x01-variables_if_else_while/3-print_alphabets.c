#include <stdio.h>
/**
 * main- print all alphabet in lower case
 * print all alphabet in upper case
 * Return: is always 0
 */

int main(void)
{
	char c;
	char b;

	{
		for (c = 'a'; c <= 'z'; c++)
			putchar(c);
	}

	{
		for (b = 'A'; b <= 'Z'; b++)
			putchar(b);
		putchar('\n');
	}
	return (0);
}

