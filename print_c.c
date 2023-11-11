#include "main.h"

/**
 * print_c - prints a character.
 * @val: arguments.
 * Return: integer.
 */
int print_c(va_list val)
{
    char s = va_arg(val, int);

    if (s >= 32 && s <= 126)
    {
        _putchar(s);
        return 1;
    }
    else
    {
        _putchar('?');
        return 1;
    }
}
