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
 * pertenece - identifica si el char es una de las letras admitidas
 * @c: letra de format, siguiente a un %
 * Return: 1 si pertenece, 0 caso contrario
 */
int pertenece(char c)
{
	int i = 0;
	char *arr = "csdibuoxXSp";

	while (arr[i])
	{
		if (arr[i] == c)
			return (1);
	i++;
	}

	return (0);
}
