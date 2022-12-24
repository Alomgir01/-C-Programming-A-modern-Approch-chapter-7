#include <stdio.h>
int main(void)
{
    printf("Size of int is: %d bytes.\n",(int) sizeof(int));
    printf("Size of short is: %d bytes.\n",(int) sizeof(short));
    printf("Size of long is: %d bytes.\n",(int) sizeof(long));
    printf("Size of float is: %d bytes.\n", (int) sizeof(float));
    printf("Size of double is: %d bytes.\n", (int) sizeof(double));
    printf("Size of long double is: %d bytes.\n", (int) sizeof(long double));
    return 0;
}
