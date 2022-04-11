#include <stdio.h>
/**
 *main - print all the numbers of base 16 in lower case
 *Return; is always 0
 */

int main(void)
{
	unsigned char a = 0;
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(a);
		a++;

	}
	a = 1;

	for (i = 0; i < 6; i++)
	{
		putchar('0' + a);
		a++;
	}
	putchar('\n');
	return (0);
}
