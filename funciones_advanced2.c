#include "main.h"
/**
 * print_rev - imprime el string al revés
 * @lista: argumentos
 *
 * Return: 0
 */

int print_rev(va_list lista)
{
	char *s;
	int c = 0, cant = 0;

	s = va_arg(lista, char*);

	if (s)
	{
		while (c >= 0)
		{
			if (s[c] == '\0')
				break;
			c++;
		}

		for	(c--; c >= 0; c--)
		{
			_putchar(s[c]);
			cant++;
		}
	}
	return (cant);
}

/**
 * print_unsigned - print unsigned int
 * @lista: lista de argumentos
 * Return: nº de chars impresos
 */
int print_unsigned(va_list lista)
{
	int i = 0;
	unsigned int n = va_arg(lista, unsigned int);

	if (n == 0)
	{
	_putchar('0');
	return (1);
	}

	print_unsigned_r(n);

	while (n > 0)
	{
		i++;
		n = n / 10;
	}

	return (i);
}

/**
 * print_rot13 - encripta string en rot13
 * @lista: lista de args
 * Return: nº chars impresos
 */
int print_rot13(va_list lista)
{
	char c, d;
	int i = 0, cont = 0;
	char *a = va_arg(lista, char *);

	for (i = 0; a[i] != '\0'; i++)
	{
		c = a[i];
		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		{
			while ((a[i] >= 'n' && a[i] <= 'z') || (a[i] >= 'N' && a[i] <= 'Z'))
			{
				d = a[i] - 13;
				break;
			}

			if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
				d = c + 13;

			_putchar(d);
		}
		else
		{
			_putchar(c);
		}

		cont++;
	}

	return (cont);
}

/**
 * print_non_print - imprime la cadena reemplazando caracteres
 * no imprimibles por '\x + su valor ASCII en HEXADECIMAL'
 * @lista: argumentos
 *
 * Return: 0
 */
int print_non_print(va_list lista)
{
	char *s;
	int resto, i, cont = 0, chars = 0;
	char n_h[100];
	unsigned int num_d = 0;

	s = va_arg(lista, char*);
	if (!s)
		s = "(null)";
	while (s[cont])
	{
		if ((s[cont] > 0 && s[cont] < 32))
		{
			num_d = (unsigned int)s[cont];
			i = 0;
			_printf("\\x");
			if (s[cont] <= 16)
				_putchar('0');

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
				_putchar(n_h[i]);
			chars += 4;
		}
		else
			chars += _putchar(s[cont]);

		cont++;
	}
	return (chars);
}
