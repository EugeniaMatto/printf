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
	_putchar(va_arg(lista, int));
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

	st_aux = va_arg(lista, char*);
	if (!st_aux)
		st_aux = "(nil)";
	while (st_aux[cant])
	{
		_putchar(st_aux[cant]);
		cant++;
	}
	return (cant);
}


/**
 * print_int - imprime el número recibido
 * @lista: argumentos
 *
 * Return: cantidad de caracteres impresos
 */


int print_int(va_list lista)
{
	int n = va_arg(lista, int);
	int i = 0, aux = 0;
	unsigned int dc, dig, nat = n;
	double f = 1;

	aux = n;


	while (aux > 0)
	{
	i++;
	aux = aux / 10;
	}
	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			nat = n * -1;
			_putchar('-');
		}
		while (f <= nat)
			f *= 10;
		dc = f / 10;
		while (dc >= 1)
		{
			dig = nat / dc;
			_putchar(dig + '0');
			nat = (nat - (dc * dig));
			dc /= 10;
		}
	}
	return (i);
}


