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

