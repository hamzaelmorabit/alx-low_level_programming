#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Entry point
 * Description: count to 98https://github.com/hamzaelmorabit/alx-low_level_programming/tree/master/0x02-functions_nested_loops
 * @n: number
 * Return: a + b
 */
void print_to_98(int n)
{
printf("%d", n);
while (n > 98)
{
n--;
printf(", %d", n);
}
while (n < 98)
{
n++;
printf(", %d", n);
}
printf("\n");
}
