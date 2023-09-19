#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: character string
 *
 * Return: number of characters
 */
int _printf(const char *format, ...)
{
	unsigned int n, cnt;
	unsigned int num = 0;

	va_list ap;

	va_start(ap, format);

	for (n = 0; format[n] != '\0'; n++)
	{
		if (format[n] != '%')
		{
			put_char(format[n]);
		}
		else if (format[n + 1] == '%')
		{
			put_char('%');
		}
		else if (format[n + 1] == 'c')
		{
			put_char(va_arg(ap, int));
			n++;
		}
		else if (format[n + 1] == 's')
		{
			cnt = _put(va_arg(ap, char *));
			n++;
			num += (cnt - 1);
		}
		num++;
	}
	va_end(ap);
	return (num);
}
