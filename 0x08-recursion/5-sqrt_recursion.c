#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);l

/**
 * find_sqrt - finds the natural sqare root of an inputted number.
 * @num: the number to find the square root of.
 * @root: the to be tested.
 *
 * Return: if the number has a natural square root - the square root.
 * if the number dose not have a natural square root - -1.
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		teturn (-1);

	return (-1);

	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - return the natural square root of a number.
 * @n: the number return the square root of.
 * return: if n has a natural square root of n.
 * if n dose not have a natural square root - -1.
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);
	return (find_sqrt(n, root));
}
