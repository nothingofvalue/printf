#include "main.h"

/**
 * print_number - prints an integer.
 * @n: integer to print.
 * Return: number of digits printed.
 */
int print_number(int n)
{
    int digit, exp = 1, i = 0;

    if (n < 0)
    {
        _putchar('-');
        n = -n;
        i++;
    }

    if (n == 0)
    {
        _putchar('0');
        return 1;
    }

    while (n / exp > 0)
    {
        exp *= 10;
    }

    while (exp > 1)
    {
        exp /= 10;
        digit = n / exp;
        _putchar(digit + '0');
        n -= digit * exp;
        i++;
    }

    _putchar(n + '0');
    return i + 1;
}

/**
 * print_i - prints an integer.
 * @args: argument to print.
 * Return: number of digits printed.
 */
int print_i(va_list args)
{
    return print_number(va_arg(args, int));
}

/**
 * print_d - prints a decimal.
 * @args: argument to print.
 * Return: number of digits printed.
 */
int print_d(va_list args)
{
    return print_number(va_arg(args, int));
}
