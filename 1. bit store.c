#include <stdio.h>
int main(void)
{
    long i, n;

    printf("16-bit machine = -32,768 to 32,767\n");
    printf("32-bit machine = -2,147,483,648 to 2,147,483,647\n");
    printf("64-bit machine = -2,147,483,648 to 2,147,483,647\n\n");

    printf("Enter number of entries in table: ");
    scanf("%ld", &n);

    for (i = 1; i <=n; i++)
        printf("%ld.\t%ld\n", i, i*i);
    return 0;
}
