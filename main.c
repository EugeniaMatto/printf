#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	/*
	int n = 13432780;
	char *str = "\"sd";
	char *str2 = "asdsa";
	char a = 65;
*/	int len;
	int len2;
/*	unsigned int as;
	int b;
	char *s;
	char *s2;
	char *s3;
	char *s4;
	char c;
	int i; */
	len = _printf("\nHEXA %X\n", 3588888888);
	len2 = printf("\nHEXA %X\n", 3588888888);
	_printf("\nlen = %d,len2 = %d\n", len, len2); 
	
	len = _printf("\nHEXA %X\n", 0);
	        len2 = printf("\nHEXA %X\n", 0);
	_printf("\nlen = %d,len2 = %d\n", len, len2); 

	len = _printf("\nHEXA %X\n", UINT_MAX);
	len2 = printf("\nHEXA %X\n", UINT_MAX);
	_printf("\nlen = %d,len2 = %d\n", len, len2); 

	len = _printf("\nHEXA %X\n", -20);
	len2 = printf("\nHEXA %X\n", -20);
	_printf("\nlen = %d,len2 = %d\n", len, len2); 

	printf("\nlen = %d,len2 = %d\n", len, len2);

	_printf("\n----------------------\n");

	 len = _printf("\nhexa %x\n", 3588888888);
	 len2 = printf("\nhexa %x\n", 3588888888);
	_printf("\nlen = %d,len2 = %d\n", len, len2);

	len = _printf("\nhexa %x\n", 0);
	len2 = printf("\nhexa %x\n", 0);
	_printf("\nlen = %d,len2 = %d\n", len, len2);

	len = _printf("\nhexa %x\n", UINT_MAX);
	len2 = printf("\nhexa %x\n", UINT_MAX);
	_printf("\nlen = %d,len2 = %d\n", len, len2);

	len = _printf("\nhexa %x\n", -20);
	len2 = printf("\nhexa %x\n", -20);
	_printf("\nlen = %d,len2 = %d\n", len, len2);

   	printf("\nlen = %d,len2 = %d\n", len, len2);

	 _printf("\n----------------------\n");	
	len = _printf("\nadress %p\n", &len);
	len2 = printf("\nadress %p\n", &len);
	_printf("\nlen = %d,len2 = %d\n", len, len2);

	len = _printf("\nadress %p\n", NULL);
	len2 = printf("\nadress %p\n", NULL);
	_printf("\nlen = %d,len2 = %d\n", len, len2);

	len = _printf("\nadress %p\n", &len2);
	len2 = printf("\nadress %p\n", &len2);
	_printf("\nlen = %d,len2 = %d\n", len, len2);

	len = _printf("\nhexa %p\n", (void *)0x7ffe637541f0);
	len2 = printf("\nhexa %p\n", (void *)0x7ffe637541f0);
	_printf("\nlen = %d,len2 = %d\n", len, len2);

	 printf("\nlen = %d,len2 = %d\n", len, len2);
	_printf("\n----------------------\n");

 len = _printf("%S\n", "Best\nSchool");
        len2 = _printf("%S\n", NULL);
        _printf("\nlen = %d,len2 = %d\n", len, len2);


	return (0);
}
