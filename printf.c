#include "main.h"
/**
 * _printf - print chars
 * @format: format
 * Return: Always 0.
 */
int _printf(const char *format, ...)
{
	int b, i = 0;
	int cont = 0;
	va_list lista;

	print print_s[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"d", print_int},
		{"x", print_hex},
		{"X", print_HEX},
		{"o", print_oct},
		{"%", print_per},
		{"b", print_binary},
		{"u", print_unsigned}
		};
	va_start(lista, format);
	while (format[i])
	{
		if ((format[i] == '%') && (pertenece(format[i + 1]) == 1))
		{
			b = 0;
			while (b < 10)
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
