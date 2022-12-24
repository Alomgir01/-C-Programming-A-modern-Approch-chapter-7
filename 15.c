#include <stdio.h>
#include <limits.h>
#define largest SHRT_MAX // largest value a short int can hold. From limits.h

int main(void)
{
    int i, j, n;
    short factorial;

    printf("Enter a positive integer: ");
    scanf("%d", &n);
    factorial = 1;

    for (i = 1; i <= n; i++)
    {
        if ((factorial *= (n - (n - i))) < 0)
            break;
        else
            printf("n = %d\tn! = %d\n", i, factorial);
    }

    if (factorial < 0)
    {
        n = i - 1;
        factorial = 1;
        for (j = 1; j <= n; j++)
        {
            factorial *= (n - (n - j));
        }
        printf("\nLargest value of n for which this program prints\n");
        printf("the correct factorial for a short int is:\n");
        printf("n = %d\tn! = %d\n", n, factorial);
    }
    else
        printf("factorial of %d is: %d\n", n, factorial);

    printf("The largest value a short int can hold on this machine is %d\n\n", largest);

    return 0;
}
