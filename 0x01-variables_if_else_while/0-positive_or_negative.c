
#include <stdio.h>
#include <stdlib.h>

#include <time.h>
#define RAND_MAX 11
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
   
    if (n < 0)
        printf("%d is negative", n);
    else if (n > 0)
        printf("%d is posiitve", n);

    else
        printf("%d is zero", n);

 

    return 0;
}
