#include "main.h"

/**
 * print_array - prints n elements of an array
 * @a: array
 * @n: number of vakues to be printed
 */
void print_array(int *a, int n)
{
	int t;

	for (t = o; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
			printf(", ");
	}

	printf("\n");
}
