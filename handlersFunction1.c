#include "main.h"
/**
 * print_string - prints a string
 * @args: arguments list
 *
 * Return: number of characters printed
 */
int print_string(va_list args)
{
char *str = va_arg(args, char *);
char *null = "(null)";
int count = 0, i;

if (str == NULL)
{
for (i = 0; *(null + i) != '\0'; i++)
{
putchar(*(null + i));
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
return (count);
}

/**
 * print_char - prints a character
 * @args: arguments list
 *
 * Return: number of characters printed
 */
int print_char(va_list args)
{
char c = va_arg(args, int);
putchar(c);
return (1);
}
