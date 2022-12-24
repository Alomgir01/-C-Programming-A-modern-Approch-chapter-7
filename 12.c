#include <stdio.h>
int main(void)
{
    char input;
    float value;

    printf("Enter an expression (example: 1+2.5*3): ");
    while ((input = getchar()) != '\n')
    {
        switch (input)
        {
        case '+':
            value += (float) input;
            break;
        case '-':
            value -= (float) input;
            break;
        case '*':
            value *= (float) input;
            break;
        case '/':
            value /= (float) input;
            break;
        default:
            value = (float) input;
            break;
        }
    }
    printf("Value of expression: %.1f\n\n", value);
    return 0;
}
