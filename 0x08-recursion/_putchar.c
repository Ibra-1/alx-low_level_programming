#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: on success 1.
 * on error, -1 returned, and errno is swt appropriately.
 */
int _putchat(char c)
{
	return (write(1, &c, 1));
}