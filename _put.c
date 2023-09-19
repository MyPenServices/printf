#include "main.h"

/**
 * _put - output string
 * @c: string
 *
 * Return: number of characters
 */
int _put(char *c)
{
	int num = 0;

	if (c)
	{
		for (num = 0; c[num] != '\0'; num++)
		{
			put_char(c[num]);
		}
	}
	return (num);
}
