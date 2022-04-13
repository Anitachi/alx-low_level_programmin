#include "main.h"

/**
 * main - a program that prints putchar
 * Return: is always 0
 */

int main(void)
{
	char  [7] = _putchar;
	int i = 0;

	for (i = 0; i < 7; i++)
	{
		write("_putchar %i\n", i);
	}
	return (0);
}
