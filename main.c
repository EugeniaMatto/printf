#include <limits.h>
#include <stdio.h>
#include "main.h"

#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;
	int z = 2;
	void *p = &z;
	void *s = malloc(30);

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
   _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
	_printf("Address:[%p]\n", p);
	printf("Address:[%p]\n", p);
	 _printf("Address:[%p]\n", s); 
	    printf("Address:[%p]\n", s); 
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
  len =  _printf("----------[%r]-------\n", "naranja");
   _printf("Len:[%d]\n", len);
   len = _printf("binary: %b\n", 35);
    _printf("Len:[%d]\n", len);  
	len =  _printf("[%R]\n", "naranja mecanica");   
	 _printf("Len:[%d]\n", len);  
	 printf("%d\n", INT_MAX);
		printf("%d\n", INT_MIN);
		printf("%i\n", INT_MAX);
			printf("%i\n", INT_MIN);
			_printf("%d\n", INT_MAX);
				_printf("%d\n", INT_MIN);
				_printf("%i\n", INT_MAX);
					_printf("%i\n", INT_MIN);

					_printf(">%s\n", NULL);
					     _printf(">%c\n", NULL); 
						 _printf(">%c\n", 120);
    return (0);
}
