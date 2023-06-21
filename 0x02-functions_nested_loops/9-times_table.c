#include"main.h"

/**
 * times_table - prints the 9 times table
 *
*/

void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; ++num)https://github.com/hamzaelmorabit/alx-low_level_programming/tree/master/0x02-functions_nested_loops
	{
		_putchar(48);
		for (mult = 1; mult <= 9; ++mult)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48);

			_putchar((prod % 10) + 48);
		}
		_putchar('\n');
	}
}
