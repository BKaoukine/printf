#ifndef MAIN_H
#define MAIN_H

/* Libraries Included*/
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/* Functions Prototypes*/
int _printf(const char *format, ...);
void handle_char(va_list *arg_list, int *chars_printed);
void handle_string(va_list *arg_list, int *chars_printed);
void handle_percent(va_list *arg_list, int *chars_printed);

/* Structs Variables*/
typedef struct conversion_handler {
    char specifier;
    void (*handler)(va_list *, int *);
} conversion_handler;


#endif /*MAIN_H*/
