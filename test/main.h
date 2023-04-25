
#ifndef MAIN_H
#define MAIN_H

/* Libraries Included*/
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
/* Functions Prototypes*/
int _printf(const char *format, ...);
int print_space(__attribute__((unused)) va_list args, const char *format);
int print_percent(va_list args __attribute__((unused)));
int print_char(va_list args);
int print_string(va_list args);
int _putchar(char c);
static int _printint(int n);
/* Structs Variables*/


#endif /*MAIN_H*/
