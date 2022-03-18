#include "main.h"
/**
 * _printf - print chars
 * @format: format
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, cont = 0;
	va_list lista;

	if (format == NULL)
		return (-1);

	va_start(lista, format);

	while (format[i])
	{
		if ((format[i] == '%') && (format[i + 1] == '\0'))
			return (-1);

		if ((format[i] == '%') && (pertenece(format[i + 1]) == 1))
		{
			cont += get_funcion(format[i + 1], lista);
			i++;
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

/**
 * get_funcion - obtiene la funcion correspondiente a la letra
 * @l: char a evaluar
 * @lista: lista argumentos
 * Return: cant de chars impresos por la funcion
 */
int get_funcion(char l, va_list lista)
{
	int b = 0, cont = 0;

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
		{"r", print_rev},
		{"u", print_unsigned},
		{"p", print_adress},
		{"R", print_rot13},
		{"S", print_non_print}
		};

	while (b < 14)
	{
		if (print_s[b].l[0] == l)
		{
			cont += print_s[b].f(lista);
			break;
		}
	b++;
	}

	return (cont);
}

