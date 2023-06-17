#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define RAND_MAX2
 

/**
 * main - Entry point
 *
 * Description: print value of n satus; zero, positive or negative
 *
*/

 
 
int main (void)
{
    int n;
    srand(time(0));
    n = rand() - (RAND_MAX2 / 2);
    if (n < 0)
        printf("%d is negative\n", n);
    else if (n > 0)
        printf("%d is positive\n", n);
    else
        printf("%d is zero\n", n);
    return (0);
}
