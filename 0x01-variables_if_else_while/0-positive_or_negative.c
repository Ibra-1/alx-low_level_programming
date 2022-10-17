#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/* more headers goes there */
/*main-prints if the numbre positive or nactive
 * 0
 * Return: alwayes 0
 */
int main(void)
{ /* your code goes there */ 
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}

