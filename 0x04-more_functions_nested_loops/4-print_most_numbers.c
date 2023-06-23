#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int c;

    for (c = '0'; c <= '9'; c++)
    {
        if (!(c == '2' || c == '4'))
        {
            _putchar(c);
        }
    }

    _putchar('n');

    return (0);
}
