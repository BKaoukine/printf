#include "main.h"
/**
 * _printf - print function
 * @format: format of the printf function
 * Return: return to the character printed
 */
int _printf(const char *format, ...)
{
int chars_printed = 0;
va_list arg_list;
va_start(arg_list, format);

while (format && *format != '\0')
{
if (*format == '%')
{
format++;
if (*format != '\0')
{
switch (*format)
{
case 'c':
print_char(arg_list, &chars_printed);
break;
case 's':
print_string(arg_list, &chars_printed);
break;
case '%':
print_percent(arg_list, &chars_printed);
break;
default:
write(1, format - 1, 2);
chars_printed += 2;
break;
}
}
}
else
{
write(1, format, 1);
chars_printed++;
}
format++;
}
va_end(arg_list);
return (chars_printed);
}