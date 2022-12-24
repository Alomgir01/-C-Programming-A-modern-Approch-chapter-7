#include <stdio.h>
int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom, x, y, remainder;
    char operator;

    printf("Enter two fractions (+ - * /): ");
    scanf("%d/%d %c %d/%d", &num1, &denom1, &operator, &num2, &denom2);

    switch (operator)
    {
    case '+':
        result_num = num1*denom2 + num2*denom1;
        result_denom = denom1 * denom2;
        printf("The sum is ");
        break;
    case '-':
        result_num = num1 * denom2 - num2 * denom1;
        result_denom = denom1 * denom2;
        printf("The difference is ");
        break;
    case '*':
        result_num = num1 * num2;
        result_denom = denom1 * denom2;
        printf("The product is ");
        break;
    case '/':
        result_num = num1 * denom2;
        result_denom = denom1 * num2;
        printf("The quotient is ");
        break;
    default:
        printf("Invalid\n");

    }

    x = result_num;
    y = result_denom;

    while (y != 0)
    {
        remainder = x%y;
        x=y;
        y=remainder;
    }

    printf("%d/%d\n", result_num /= x, result_denom /= x);
    return 0;
}
