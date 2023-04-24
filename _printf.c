#include "main.h"
/**
 * _printf - print function
 * @format: format of the printf function
 * Return: return to the character printed
 */
int _printf(const char *format, ...)
{
conversion_handler handlers[] = {
{'c', handle_char},
{'s', handle_string},
{'%', handle_percent},
{0, NULL},
};
size_t i;
int chars_printed = 0;
va_list arg_list;
va_start(arg_list, format);

while (*format != '\0')
{
if (*format == '%')
{
format++;
for (i = 0; i < sizeof(handlers) / sizeof(handlers[0]); i++)
{
if (*format == handlers[i].specifier)
{
handlers[i].handler(&arg_list, &chars_printed);
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
