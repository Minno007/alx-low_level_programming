#include <stdio.h>

/**
 * main - entry point
 * Description: " followed by a new line, to the standard error"
 * Return: 1 (Success)
 */

int main(void)
{
	char *cmd =
	"echo 'and that piece of art is useful\" - Dora Korpar, 2015-10-19'";

	FILE *fp = popen(cmd, "w");

	pclose(fp);
	return (1);
}
