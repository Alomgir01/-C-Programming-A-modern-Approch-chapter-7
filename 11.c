#include <stdio.h>
int main(void)
{
    char first_initial, last_name;

    printf("Enter a first and last name: ");
    scanf(" %c", &first_initial);

    while (getchar() != ' ')
    {
        ;
    }

    while ((last_name = getchar()) != '\n')
    {
        if (last_name == ' ')
            ;
        else
            printf("%c", last_name);
    }
    printf(", %c.\n", first_initial);
    return 0;
}
