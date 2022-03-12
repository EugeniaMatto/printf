#include "main.h"
/**
 * _printf - print chars
 * @format: format
 * Return: Always 0.
 */
int _printf(const char *format, ...)
{
	int b, i = 0;
	int cont;
	va_list lista;

	print print_s[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"d", print_int},
	};

	va_start(lista, format);

	while (format[i])
	{
		if (format[i] == '%' && ((format[i + 1] == 'c') ||
			(format[i + 1] == 's') || (format[i + 1] == 'i') ||
			(format[i + 1] == 'd')))
		{
			b = 0;
			while (b < 4)
			{
				if (print_s[b].l[0] == format[i + 1])
				{
					cont += print_s[b].f(lista);
					i++;
				}
			b++;
			}
		}
		else
		{
		_putchar(format[i]);
		cont++;
		}
	i++;
	}
	return (cont);
}
