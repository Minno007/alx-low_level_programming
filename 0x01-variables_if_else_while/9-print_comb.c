#include <stdio.h>

/**
 * main - Entry point
 * Description: "all possible combinations of single-digit numbers"
 * Return:  0 (Success)
 */
int main(void)
{
	int sdn = 0;

	while (sdn < 10)
	{
		putchar(sdn + '0');
		sdn++;
		if (sdn != 10)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
