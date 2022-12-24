#include <stdio.h>
int main(void)
{
    double num, sum=0;
    printf("Enter a number: ");
    scanf("%lf", &num);

    while (num!=0)
    {
        sum += num;
        scanf("%lf", &num);
    }
    printf("The sum is:%.2f\n",sum);
    return 0;
}
