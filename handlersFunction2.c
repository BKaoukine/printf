#include "main.h"
/**
 * print_percent - prints a percent symbol
 * @args: arguments list (unused)
 *
 * Return: number of characters printed
 */
int print_percent(va_list args __attribute__((unused)))
{
putchar('%');
return (1);
}


/**
 * print_space - prints space
 * @args: arguments list
 * @format: format string
 *
 * Return: number of characters printed
 */
int print_space(__attribute__((unused)) va_list args, const char *format)
{
int count = 0;

putchar(' ');
count++;
while (*(format + 1) == ' ')
{
putchar(' ');
count++;
format++;
}
return (count);
}
