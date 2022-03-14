#include "main.h"
#include <unistd.h>

/**
 * _putchar - escribe el caracter recibido
 * @c: carcater a imprimir
 *
 * Return: 1
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * pertenece - identifica si el char es una de las letras que tiene funcion
 * @c: letra de format, siguiente a un %
 * Return: 1 si pertenece, 0 caso contrario
 */
int pertenece(char c)
{
	int i = 0;
	char *arr = "RbcsdiuoxXSpr";

	if (c == '%')
		return (1);

	if (c == '\0')
		return (0);

	while (arr[i])
	{
		if (arr[i] == c)
			return (1);
	i++;
	}

	return (0);
}

/**
 * print_unsigned_r - print unsigned int recursivamente
 * @n: numero a printear
 */
void print_unsigned_r(unsigned int n)
{
	if (n < 9)
	{
		_putchar(n + '0');
		return;
	}

	print_unsigned_r(n / 10);
	_putchar(n % 10 + '0');
}
