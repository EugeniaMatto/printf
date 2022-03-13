#include "main.h"

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


/**
 * print_hex - imprime en hexadecimal (minúscula)
 * @lista: argumentos
 *
 * Return: cantidad de caracteres impresos
 */


int print_hex(va_list lista)

{
	int resto, i = 0, cont = 0;
	char n_h[100];
	unsigned int num_d = va_arg(lista, unsigned int);

	if (num_d == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num_d != 0)
	{
		resto = num_d % 16;
		if (resto < 10)
			resto = resto + 48;
		else
			resto = resto + 87;
		n_h[i] = resto;
		i++;
		num_d = num_d / 16;
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(n_h[i]);
		cont++;
	}
	return (cont);
}

/**
 * print_HEX - imprime en hexadecimal (mayúscula)
 * @lista: argumentos
 *
 * Return: cantidad de caracteres impresos
 */


int print_HEX(va_list lista)

{
	int resto, i = 0, cont = 0;
	char n_h[100];
	unsigned int num_d = va_arg(lista, unsigned int);

	if (num_d == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num_d != 0)
	{
		resto = num_d % 16;
		if (resto < 10)
			resto = resto + 48;
		else
			resto = resto + 55;
		n_h[i] = resto;
		i++;
		num_d = num_d / 16;
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(n_h[i]);
		cont++;
	}
	return (cont);
}



