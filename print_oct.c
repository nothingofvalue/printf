#include "main.h"

/**
 * print_oct - prints an octal number.
 * @val: arguments.
 * Return: counter.
 */
int print_oct(va_list val)
{
    int i;
    int *array;
    int counter = 0;
    unsigned int num = va_arg(val, unsigned int);
    unsigned int temp = num;

    if (num == 0)
    {
        _putchar('0');
        return 1;
    }

    while (num / 8 != 0)
    {
        num /= 8;
        counter++;
    }
    counter++;

    array = malloc(counter * sizeof(int));

    if (array == NULL)
    {
        return -1;
    }

    for (i = 0; i < counter; i++)
    {
        array[i] = temp % 8;
        temp /= 8;
    }

    for (i = counter - 1; i >= 0; i--)
    {
        _putchar(array[i] + '0');
    }

    free(array);

    return counter;
}

