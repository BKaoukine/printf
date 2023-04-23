#include "main.h"
/**
 * _printf - print function
 * @format: format of the printf function
 * Return : return to the character printed
 */
int _printf(const char *format, ...)
{
int chars_printed = 0;
va_list arg_list;
va_start(arg_list, format);

conversion_handler handlers[] = {
{'c', handle_char},
{'s', handle_string},
{'%', handle_percent},
};

while (*format != '\0')
{
if (*format == '%')
{
format++;
for (size_t i = 0; i < sizeof(handlers) / sizeof(handlers[0]); i++)
{
if (*format == handlers[i].specifier)
{
handlers[i].handler(&arg_list, &chars_printed, NULL);
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
