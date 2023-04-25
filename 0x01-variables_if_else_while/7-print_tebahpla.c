#include <stdio.h>

/**
 * main - Entry point
 * Description: "the lowercase alphabet in reverse"
 * Return:  0 (Success)
 */
int main(void)
{
	char alpr = 'z';

	while (alpr >= 'a')
	{
		putchar(alpr);
		alpr--;
	}
	putchar('\n');
	return (0);
}
