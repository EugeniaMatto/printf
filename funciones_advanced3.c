#include "main.h"
/**
 * print_hex - imprime en hexadecimal minus
 * @lista: argumentos
 *
 * Return: cantidad de caracteres impresos
 */
int print_hex(va_list lista)
{
	return (print_hexadecimal(lista, 2));
}

/**
 * print_HEX - imprime en hexadecimal en MAYUS
 * @lista: argumentos
 *
 * Return: cantidad de caracteres impresos
 */
int print_HEX(va_list lista)
{
	return (print_hexadecimal(lista, 1));
}


/**
 * print_base - imprime 0x
 * Return: 2
 */
int print_base(void)
{
	_putchar('0');
	_putchar('x');
	return (2);
}

/**
 * print_nil - imprime (nil)
 * Return: cantidad de caracteres impresos
 */
int print_nil(void)
{
	int i;
	char *str = "(nil)";

	for (i = 0; str[i]; i++)
		_putchar(str[i]);

	return (5);
}

/**
 * print_0 - imprime \0x0
 * Return: cantidad de caracteres impresos
 */
int print_0(void)
{
        int i;
        char *str = "";

        for (i = 0; str[i]; i++)
                _putchar(str[i]);

        return (-1);
}
