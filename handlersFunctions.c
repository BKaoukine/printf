#include "main.h"
/**
 * print_char - prints a character
 * @arg_list: argument list
 * @chars_printed: pointer to the total number of characters printed
 *
 * Return: void
 */
void print_char(va_list arg_list, int *chars_printed)
{
char c = va_arg(arg_list, int);
write(1, &c, 1);
(*chars_printed)++;
}
/**
 * print_string - prints a string
 * @arg_list: argument list
 * @chars_printed: pointer to the total number of characters printed
 *
 * Return: void
 */
void print_string(va_list arg_list, int *chars_printed)
{
char *s = va_arg(arg_list, char *);
if (s == NULL)
{
s = "(null)";
}
while (*s != '\0')
{
write(1, s, 1);
s++;
(*chars_printed)++;
}
}
/**
 * print_percent - prints a percent sign
 * @arg_list: argument list (unused)
 * @chars_printed: pointer to the total number of characters printed
 *
 * Return: void
 */
void print_percent(va_list arg_list, int *chars_printed)
{
(void)arg_list;
write(1, "%", 1);
(*chars_printed)++;
}

