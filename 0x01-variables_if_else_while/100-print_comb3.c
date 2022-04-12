#include <stdio.h>
/**
 * main - entry point
 * Return: is always 0
 */

int main(void)
{
	int i;
	int c;

	for (i = 10; i <= 19; i++)
	{
		for (c = 10; c <= 19; c++)
		{
			putchar((i % 10) + '0');
			putchar((c % 10) + '0');
			if (i != 18 || c != 19)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
putchar('\n');
return (0);
	}
