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
	int (*f)(va_list);
} print;

int _putchar(char);
int print_int(va_list lista);
int print_string(va_list);
int print_char(va_list);
int pertenece(char);
int print_hex(va_list lista);
int print_HEX(va_list lista);
int print_oct(va_list lista);
int print_per(va_list lista);
int print_adress(va_list lista);
int print_binary(va_list lista);
int print_unsigned(va_list lista);
void print_unsigned_r(unsigned int n);
int _printf(const char *format, ...);

#endif
