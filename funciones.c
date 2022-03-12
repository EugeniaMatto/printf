#include "main.h"

/**
 * print_char - imprime el caracter que le pasan
 * @c: caracter a imprimir
 *
 * Return: cantidad de caracteres impresos
 */

int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
 * print_char - imprime la cadena que le pasan
 * @c: cadena a imprimir
 *
 * Return: cantidad de caracteres impresos
 */

int print_string(char *c)

{
	char *s_aux;
	int cant = 0;

	st_aux = va_arg(args, char*);
	if (!st_aux)
		st_aux = "(null)";
	while (st_aux[cant])
	{
		_putchar(st_aux[cant]);
		cant++;
	}
	return (cant);
}




/**
* print_number - imprime el entero que le pasan
* @n: número a imprimir
* Return: cantidad de caracteres impresos
*/

int print_number(va_list)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
	return _strlen(num);
}