#include "main.h"
/**
 * _printf - custom implementation
 * @format: format string to print
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
int count = 0, i, n;
va_list args;
if (format == NULL)
return (-1);
va_start(args, format);
for (i = 0; format[i] != '\0'; i++)
{if (format[i] == '%')
{
i++;
if (format[i] == '\0')
return (-1);
switch (format[i])
{case 's':
count += print_string(args);
break;
case 'c':
count += print_char(args);
break;
case '%':
count += print_percent(args);
break;
case 'd':
case 'i':
n = va_arg(args, int);
count += _printint(n);
break;
default:
_putchar('%');
_putchar(format[i]);
count += 2;
break;
}
}
else
{_putchar(format[i]);
count++;
}
}
va_end(args);
return (count);
}