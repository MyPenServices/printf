#include "main.h"

/**
 * _printf - produce output on a format
 * @format: format of the string
 * Return: prt
 */
int _printf(const char *format, ...)
{
	int prt = 0;
	va_list(ap);

	if (format == NULL)
		return (-1);

	va_start(ap, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			prt++;
		}
	else
	{
		format++;
		if (*format == '\0')
			break;

		if (*format == '%')
		{
			write(1, format, 1);
			prt++;
		}
	else if (*format == 's')
	{
		char *sng = va_arg(ap, char*);
		int len_sng = 0;
		while (sng[len_sng] != '\0')

			len_sng++;
		write(1, sng, len_sng);

		prt += len_sng;
	}

	else if (*format == 'c')
	{
		char c = va_arg(ap, int);
		write(1, &c, 1);

		prt++;
	}
	}
	format++;
	}
	va_end(ap);
	return (prt);
}
