#ifndef _PRINTF_
#define _PRINTF_
#include <stdarg.h>

/**
 * struct print_ - Correspondera la letra con la funcion para printear
 *
 * @l: letra que nos pasaran en el format, despues de un %
 * @f: la funcion
 */
typedef struct print_
{
	char *l;
	int (*f)(va_list)
} print;

int _putchar(char);
int _printf(const char *format, ...);



#endif
