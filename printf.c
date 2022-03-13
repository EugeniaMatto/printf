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
		};
	va_start(lista, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] == '%')
		{
			i += 2;
			_putchar('%');
			cont++;
		}
		if ((format[i] == '%') && (pertenece(format[i + 1]) == 1))
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
