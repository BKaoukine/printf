#include "main.h"

/**
*handle_char - function handles %c format specifier
*@arg_list: pointer to arguments list
*@chars_printed: pointer to int that holds number of chars printerd
*/
void handle_char(va_list *arg_list, int *chars_printed)
{
char c = va_arg(*arg_list, int);
write(1, &c, 1);
(*chars_printed)++;
}

/**
*handle_string - function handles %s format specifier
*@arg_list: pointer to arguments list
*@chars_printed: pointer to int that holds number of chars printerd
*/
void handle_string(va_list *arg_list, int *chars_printed)
{
char *s = va_arg(*arg_list, char *);
while (*s != '\0')
{
write(1, s, 1);
s++;
(*chars_printed)++;
}
}

/**
*handle_percent - function handles % specifier
*@arg_list: pointer to arguments list
*@chars_printed: pointer to int that holds number of chars printerd
*/
void handle_percent(va_list *arg_list, int *chars_printed)
{
(void)arg_list;  /* suppress unused parameter warning */
write(1, "%", 1);
(*chars_printed)++;
}
