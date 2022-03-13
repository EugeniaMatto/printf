#include "main.h"

/**
 * print_unsigned - print unsigned int
 * @lista: lista de argumentos
 * Return: nº de chars impresos
 */
int print_unsigned(va_list lista)
{
	int i = 0;
	unsigned int n = va_arg(lista, unsigned int);

	print_unsigned_r(n);

	while (n > 0)
	{
	i++;
	n = n / 10;
	}

	return (i);
}
