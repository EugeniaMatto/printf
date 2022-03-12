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
* _strlen - devuelve el largo de la cadena recibida
* @s: cadena recibida
* Return: largo de la cadena
*/

int _strlen(char *s)

{
int c = 0;
while (s[c] != '\0')
{
c++;
}
return (c);
}
