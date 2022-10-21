#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * struct format - Struct for format
 * @specifiers: Struct format
 * @f: The function associated
*/

typedef struct specifiers
{
	char specifiers;
	int (*f)(va_list);
} specifiers_t;

/* prototypes */
int _printf(const char *format, ...);
int get_function(char s, va_list args);
int _putchar(char c);

/*Conversion specifiers*/
int print_char(va_list args);
int print_string(va_list args);
int print_digit(va_list args);
int print_mod(va_list args);
int print_rev_string(va_list args);

#endif /* MAIN_H */