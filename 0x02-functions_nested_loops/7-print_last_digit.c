#include "main.h"
/**
 * print_last_digit - entry point
 * Description: prints the last digit of a number.
 * Return: digit of a number
 * @i: Ascii code
 */
int print_last_digit(int i)
{
int ld;
ld = i % 10;
if (ld < 0)
{
ld = -ld;
}
_putchar(ld + 48);
return (ld);
}
