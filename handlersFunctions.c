#include "main.h"

void handle_char(va_list *arg_list, int *chars_printed)
{
char c = va_arg(*arg_list, int);
write(1, &c, 1);
(*chars_printed)++;
}

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

void handle_percent(va_list *arg_list, int *chars_printed) {
(void)arg_list;  /* suppress unused parameter warning */
write(1, "%", 1);
(*chars_printed)++;
}
