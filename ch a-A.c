#include<stdio.h>
int main()
{
    int ch;

    printf("Enter a charecter: ");
    scanf("%c",&ch);

    for(ch='A'; ch<='Z';ch++);

    printf("%c",ch);

}
