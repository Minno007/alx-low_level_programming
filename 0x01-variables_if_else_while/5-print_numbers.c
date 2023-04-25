#include <stdio.h>

/**
 * main - Entry point
 * Description: "single digit numbers"
 * Return: 0 (Success)
 */
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		printf("%d", number);
		number++;
	}
	printf("\n");
	return (0);
}
