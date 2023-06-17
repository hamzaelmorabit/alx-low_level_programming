#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: print value of n satus; zero, positive or negative
 *
 * Return : always we return a 0, in successful execution
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
        if (n < 0)
                printf("%d is negative\n", n);
        else if (n > 0)
                printf("%d is positive\n", n);
        else
                printf("%d is zero\n", n);
        return (0);
}
