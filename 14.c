#include <stdio.h>
#include <math.h>
int main(void)
{
    double x,y=1,sqrt;
    int terminate=0;

    printf("Enter a positive number: ");
    scanf("%lf", &x);

    do
    {
        sqrt = ((y + (x / y)) / 2);
        if (fabs(y - sqrt) < (0.01*y))
            terminate = 1;
        y = sqrt;
    }
    while (terminate != 1);
    printf("Square root: %.2f\n", sqrt);
    return 0;
}
