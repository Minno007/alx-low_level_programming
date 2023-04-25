#include <stdio.h>

/**
 * main - Entry point
 * Description: "all possible different combinations of three digits"
 * Return:  0 (Success)
 */
int main(void)
{
	int a = 0;
	int b;
	int c;

	while (a < 8)
	{
		b = a + 1;
		while (b < 9)
		{
			c = b + 1;
			while (c < 10)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
				if (c != 9 || b != 8 || a != 7)
				{
					putchar(',');
					putchar(' ');
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
