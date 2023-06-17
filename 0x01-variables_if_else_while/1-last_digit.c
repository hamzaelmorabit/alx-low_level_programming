#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: print value of n satus; zero, positive or negative
 *
 * Return: return 0 if code succeed
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    int rest = n % 10;

    if (rest > 5)
	printf("Last digit of %d  is %d and is and is greater than 5\n", n, rest);
    else if (rest < 6)
	printf("Last digit of %d  is %d and is less than 6 and not 0\n", n, rest);
    else
	printf("Last digit of %d  is %d and is 0\n", n, rest);

    return (0);
}
