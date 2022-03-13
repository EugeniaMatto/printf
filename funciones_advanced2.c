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
	int cant = 0;

	s = va_arg(lista, char*);




int c = 0;

while (c >= 0)
{
if (s[c] == '\0')
break;
c++;
}

for (c--; c >= 0; c--)
_putchar(s[c]);

}