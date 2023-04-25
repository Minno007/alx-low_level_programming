#include <stdio.h>

/**
 * main - Entry point
 * Description: "all the numbers of base 16 in lowercase"
 * Return: 0 (Success)
 */
int main(void)
{
	int num16 = 0;
	char num162 = 'a';

	while (num16 < 10)
	{
		putchar(num16 + '0');
		num16++;
	}
	while (num162 < 'g')
	{
		putchar(num162);
		num162++;
	}
	putchar('\n');
	return (0);
}
