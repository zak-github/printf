#include "main.h"

/**
 * _printf - Function that produces output according to a format.
 * @format: Format to print
 *
 * Return: the number of characters printed (excluding the null byte used
 * to end output to strings)
 */
int _printf(const char *format, ...)
{
	int i = 0, printed_chars = 0;
	int (*fun)(va_list args);

	va_list args;

	va_start(args, format);

	if (!format)
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;

			if (format[i] == '\0')
				return (-1);

			fun = get_specifier_handler(format[i]);
			if (fun)
				printed_chars += fun(args);
			else
				printed_chars += handle_unknown(format[i]);
		} else
		{
			_putchar(format[i]);
			printed_chars++;
		}
		i++;
	}

	va_end(args);

	return (printed_chars);
}
