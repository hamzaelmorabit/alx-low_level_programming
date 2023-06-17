#include <stdio.h>
#include <stdlib.h>
#include <time.h>
  

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
    n = rand() % (RAND_MAX/2 + 1) - RAND_MAX/4;
    if (n < 0)
        printf("%d is negative\n", n);
    else if (n > 0)
        printf("%d is positive\n", n);
    else
        printf("%d is zero\n", n);
    return (0);
}
