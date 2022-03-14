#include "main.h"

/**
 * print_per - imprime %
 *
 * @lista: argumentos, no usada
 * Return: cantidad de caracteres impresos (1)
 */
int print_per(__attribute__((unused)) va_list lista)
{
	_putchar('%');
	return (1);
}

/**
 * print_char - imprime el caracter que le pasan
 *
 * @lista: argumentos
 * Return: cantidad de caracteres impresos
 */
int print_char(va_list lista)
{
	char c = va_arg(lista, int);

	_putchar(c);
	return (1);
}

/**
 * print_string - imprime la cadena que le pasan
 * @lista: argumentos
 *
 * Return: cantidad de caracteres impresos
 */
int print_string(va_list lista)

{
	char *st_aux;
	int cant = 0;

	st_aux = va_arg(lista, char *);

	if (st_aux == NULL)
		st_aux = "(nil)";

	while (st_aux[cant])
	{
		_putchar(st_aux[cant]);
		cant++;
	}

	return (cant);
}


/**
 * print_int - print int
 * @lista: lista de argumentos
 * Return: n de chars impresos
 */
int print_int(va_list lista)
{
	unsigned int n;
	int i = 0;
	int num = va_arg(lista, int);

	if (num < 0)
	{
		_putchar('-');
		i++;
		num = -num;
	}

	if (num >= 0 && num <= 9)
	{
		_putchar(num + '0');
		return (1);
	}

	n = (unsigned int) num;

	print_unsigned_r(n);

	while (n > 0)
	{
		i++;
		n = n / 10;
	}

	return (i);
}

