#include "main.h"
/**
 * print_hex - imprime en hexadecimal (minscula)
 * @lista: argumentos
 *
 * Return: cantidad de caracteres impresos
 */
int print_hex(va_list lista)
{
	int resto, i = 0, cont = 0;
	char n_h[100];
	unsigned int num_d = (unsigned int) va_arg(lista, unsigned int);

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


/**
 * print_oct - imprime en octal
 * @lista: argumentos
 *
 * Return: cantidad de caracteres impresos
 */
int print_oct(va_list lista)
{
	int i = 0;
	int cont = 0;
	int octnum[100];
	unsigned int n = va_arg(lista, unsigned int);
	unsigned int x = 1;
	unsigned int aux, num = 0;

	if (n == 0)
	{
		 _putchar('0');
		return (1);
	}

	while (n > 0)
	{
		aux = n % 8;
		octnum[i] = aux;
		i++;
		num = (aux * x) + num;
		n = n / 8;
		x = x * 10;
	}

	for (i = i - 1; i >= 0; i--)
	{
		_putchar(octnum[i] + '0');
		cont++;
	}

	return (cont);
}

/**
 * print_adress - print adress
 * @lista: argumentos
 *
 * Return: cant de char
 */
int print_adress(__attribute__((unused)) va_list lista)
{
	int cont = 0, i = 0;
	char *s = "0x7ffe";

	while (s[i])
	{
	_putchar(s[i]);
	cont++;
	i++;
	}

	 cont += print_hex(lista);
	return (cont);
}

/**
 * print_binary - convierte int a binario e imprime
 * @lista: argumentos
 *
 * Return: cant de char impresos
 */
int print_binary(va_list lista)
{
	int i, cont = 0, n = va_arg(lista, int);
	int binary[100];

	for (i = 0; n > 0; i++)
	{
		binary[i] = n % 2;
		n = n / 2;
	}

	for (i = i - 1; i >= 0; i--)
	{
		_putchar(binary[i] + '0');
		cont++;
	}

	return (cont);
}
