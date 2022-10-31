#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: the string to be searched.
 * @needle: the substring to be located.
 *
 * Return: if the substring is located - a pointer to the beginning
 * of the located substring.
 * if the substring is not located - NULL.
 */

char *_strstr(char *i, char *a)
{
	int index;

	if (*a == 0)
		return (i);

	while (*i)
	{
		index = 0;

		if (i[index] == a[index])
		{
			do {
				if (a[index + 1] == '\0')
					return (i);

				index++;
			}while (i[index] == a[index]);
	}
	i++;
	}
	return ('\0');

}
