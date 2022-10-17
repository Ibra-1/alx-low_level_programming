#include <stdio.h>

/**
 * main - prints all number combination of single digits
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (a = 0; a <10; n++)
	{
		putchar(n + '0');
		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
