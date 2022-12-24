#include <stdio.h>
#define INTERVAL 24
int main(void)
{
    int num, i;
    printf("Enter number of entries in table: ");
    scanf("%d", &num);

    getchar() == ' ';
    for (i = 1; i <= num; i++)
    {
        printf("%d. %d\n", i, i*i);

        if (i % INTERVAL == 0)
        {
            printf("Press Enter to continue...");
            while (getchar() != '\n');
        }
    }
    return 0;
}
