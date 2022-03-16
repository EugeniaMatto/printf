# `_printf`
### Prototype:

int _printf(const char *, ...);

######  `_printf` is a customized C function based on the original function `printf`. This is our first big proyect as Holberton School students C#17.
### Examples



| Input | Output |
| ------ | ------ |
| _printf("%s\n", 'Hello!'); | Hello! |
| _printf("The last letter of Holberton is %c\n", 'n'); | The last letter of Holberton is n|
| _printf("%d\n"); | 7000 |
| _printf("My hand has %i fingers\n", 5); | My hand has 5 fingers |
| _printf("Address: %p\n", addr); | Address: 0x7ffe637541f0 |

### General Requirements

 - Allowed editors: vi, vim, emacs
 - All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
 - Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
 - You are not allowed to use global variables
 - No more than 5 functions per file
 
### Authorized functions and macros
``write (man 2 write)``
``malloc (man 3 malloc)``
``free (man 3 free)``
``va_start (man 3 va_start)``
``va_end (man 3 va_end)``
``va_copy (man 3 va_copy)``
``va_arg (man 3 va_arg)``

### Mandatory Tasks
- [x] Write function that produces output with conversion specifiers c, s, and %.
- [x] Handle conversion specifiers d, i.
- [x] Create a man page for your function.

### Advanced Tasks
- [x] Handle conversion specifier b.
- [x] Handle conversion specifiers u, o, x, X.
- [x] Use a local buffer of 1024 chars in order to call write as little as possible.
- [x] Handle conversion specifier S.
- [x] Handle conversion specifier p.
- [ ] Handle flag characters +, space, and # for non-custom conversion specifiers.
- [ ] Handle length modifiers l and h for non-custom conversion specifiers.
- [ ] Handle the field width for non-custom conversion specifiers.
- [ ] Handle the precision for non-custom conversion specifiers.
- [ ] Handle the 0 flag character for non-custom conversion specifiers.
- [x] Handle the custom conversion specifier r that prints the reversed string.
- [x] Handle the custom conversion specifier R that prints the rot13'ed string.
- [ ] All above options should work well together.
 
  ### File .c Descriptions
*printf.c:* `_printf`, `get_funcion`

*funciones.c:* `print_per`, `print_char`, `print_string`, `print_int`

*funciones_advanced.c:* `print_hexadecimal`, `print_oct`, `print_adress`, `print_binary`

*funciones_advanced2.c:* `print_rev`, `print_unsigned`, `print_rot13`, `print_non_print`.

*funciones_advanced3.c:* `print_hex`, `print_HEX`, `print_base`, `print_nil`

*func_aux.c:* `_putchar`, `pertenece`, `print_unsigned_r`.

##### *By:*
[Maria Eugenia Matto](https://www.linkedin.com/in/maria-matto/)
[Martin Liporace](https://www.linkedin.com/in/martin-liporace-es-it-075a80230/)
