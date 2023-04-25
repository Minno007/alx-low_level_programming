#include <stdio.h>

/**
 * main - Entry point
 * Description: "all possible different combinations of two digits"
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;
	int b;

	while (a < 9)
	{
		b = a + 1;
		while (b < 10)
		{
			putchar(a + '0');
			putchar(b + '0');
			if (b != 9 || a != 8)
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
