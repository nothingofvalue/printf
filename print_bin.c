#include "main.h"

/**
 * print_bin - prints binary number.
 * @val: parameter.
 * Return: integer
 */
int print_bin(va_list val)
{
    int flag = 0;
    int cont = 0;
    unsigned int num = va_arg(val, unsigned int);

    for (int i = 31; i >= 0; i--)
    {
        int bit = (num >> i) & 1;

        if (bit || flag)
        {
            _putchar(bit + '0');
            cont++;
            flag = 1;
        }
    }

    if (cont == 0)
    {
        cont++;
        _putchar('0');
    }

    return cont;
}
