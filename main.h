#ifndef MAIN_H
#define MAIN_H

/* Libraries Included*/
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

/* Functions Prototypes*/
int _printf(const char *format, ...);
void print_char(va_list arg_list, int *chars_printed);
void print_string(va_list arg_list, int *chars_printed);
void print_percent(va_list arg_list, int *chars_printed);

/* Structs Variables*/


#endif /*MAIN_H*/

