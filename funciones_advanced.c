#include "main.h"
/**
 * print_hexadecimal - imprime en hexadecimal
 * @lista: argumentos
 * @tipo: 3 si imprime adress,2 si impr. hexa en minus,1 si imp. hexa en MAYUS
 * Return: cantidad de caracteres impresos
 */
int print_hexadecimal(va_list lista, int tipo)
{
	int i = 0, cont = 0, resto, suma = 87;
	char n_h[100];
	unsigned long num_d;

	if (tipo == 3)
		num_d = (unsigned long) va_arg(lista, unsigned long);
	else
		num_d = (unsigned long) va_arg(lista, unsigned int);

	if (tipo == 3 && num_d > 0)
		cont += print_base();

	if (num_d == 0)
	{
		if (tipo == 3)
			return (cont + print_nil());

		_putchar('0');
		return (1);
	}
	if (tipo == 1)
		suma = 55;
	while (num_d != 0)
	{
		resto = num_d % 16;
		if (resto < 10)
			resto = resto + 48;
		else
			resto = resto + suma;
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
int print_adress(va_list lista)
{
	return (print_hexadecimal(lista, 3));
}

/**
 * print_binary - convierte int a binario e imprime
 * @lista: argumentos
 *
 * Return: cant de char impresos
 */
int print_binary(va_list lista)
{
	int i, cont = 0;
	unsigned int n = (va_arg(lista, unsigned int)), binary[100];

	if (n == 0)
	{
		_putchar(48);
		return (1);
	}

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
