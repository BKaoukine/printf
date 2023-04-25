#include "main.h"
/**
 * _printint - print an integer
 * @n: integer to print
 * Return: number of digits printed
 */
static int _printint(int n)
{
unsigned int u;
int count = 0;

if (n < 0)
{
_putchar('-');
u = -n;
count++;
}
else
{
u = n;
}

if (u / 10)
count += _printint(u / 10);

_putchar((u % 10) + '0');
count++;

return (count);
}