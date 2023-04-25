#include <stdio.h>

/**
 * main - Entry point
 * Description: " Numberz"
 * Return: 0 (Success)
 */
int main(void)
{
	int numz = 0;

	while (numz < 10)
	{
		putchar(numz + '0');
		numz++;
	}
	putchar('\n');
	return (0);
}
