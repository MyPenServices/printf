#include <unistd.h>

/**
 * put_char - writes the char c to stdout
 * @c: char to print
 *
 * Return: On success 1.
 */
int put_char(char c)
{
	return (write(1, &c, 1));
}
