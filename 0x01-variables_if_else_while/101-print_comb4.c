#include <stdio.h>
/**
 * main - entry point
 * Return: always 0
 */

int main(void)
{
	int i;
	int m;
	int p;

	for  (i = 0; i <= 9; i++)
	{
		for (m = 0; m <= 9; m++)
		{
			for (p = 0; p <= 9; p++)
			{
				if (p > m && m > i)
				{
					putchar(i + '0');
					putchar(m + '0');
					putchar(p + '0');
					if (i != 7 || m != 8 || p != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
