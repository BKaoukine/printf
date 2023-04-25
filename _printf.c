#include "main.h"
/**
 * _printf - custom implementation of printf function
 * @format: format string to print
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
    char *null = "(null)";
    
    if (format == NULL)
        return (-1);

    va_list args;
    va_start(args, format);
    int count = 0;

    while (*format)
    {
        if (*format == '%')
        {
            format++;

            if (*format == '\0')
                return (-1);

            switch (*format)
            {
                case 's':
                {
                    char *str = va_arg(args, char*);
                    int i , j;
                    if (str == NULL)
                    {
            			for (j = 0; *(null + j) != '\0'; j++)
            			{
            				putchar(*(null + j));
            				count++;
            			}
                    }
                   else
                   {
               			for (i = 0; str[i] != '\0'; i++)
            			{
            				putchar(str[i]);
                            count++;
            			}

                   }
                    break;
                }
                case 'c':
                {
                    char c = (char)va_arg(args, int);
                    putchar(c);
                    count++;
                    break;
                }
                case '%':
                    putchar('%');
                    count++;
                    break;
                case ' ':
                    putchar(' ');
                    count++;
                    while (*(format+1) == ' ')
                    {
                        format++;
                    }
                    break;
                default:
                    putchar('%');
                    putchar(*format);
                    count += 2;
                    break;
            }
        }
        else
        {
            putchar(*format);
            count++;
        }

        format++;
    }

    va_end(args);
    return count;
}