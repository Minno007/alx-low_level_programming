#include <stdio.h>

/**
 * main - Entry point
 * Description: "all possible combinations of two two-digit numbers."
 * Return: 0 (Success)
 */
int main(void)
{
	int a = 0;
	int b = 0;
	int bbg = a * 10 + 1;
	int c;
	int d;

	while (a < 10)
	{
		while (b < 10)
		{
			bbg = a * 10 + b + 1;
			while (bbg < 100)
			{
				d = bbg % 10;
				c = (bbg / 10) % 10;
				putchar(a + '0');
				putchar(b + '0');
				putchar(' ');
				putchar(c + '0');
				putchar(d + '0');
				if (d != 9 || c != 9 || b != 8 || a != 9)
				{
					putchar(',');
					putchar(' ');
				}
				bbg++;
			}
			b++;
		}
		a++;
		b = 0;
	}
	putchar('\n');
	return (0);
}
