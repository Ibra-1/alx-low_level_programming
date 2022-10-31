#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: memry area
 * @src: source
 * @n: length
 *
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
