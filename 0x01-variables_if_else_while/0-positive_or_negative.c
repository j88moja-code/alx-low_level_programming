#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main -Entry point
*n - random number
*Return: 0
*/
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /*check the boolean condition  */
        if (n > 0)
        {
                /*if the number is positive */
                printf("%d is positive\n", n);
        } else
        {
                if (n == 0)
                {
                        /*if the number is equal to zero */
                        printf("%d is zero\n", n);
                } else(n < 0)
                {
                        /*if the number is less than zero */
                        printf("%d is negative\n", n);
                }

        }
        return (0);
}
