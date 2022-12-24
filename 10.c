#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char input;
    int count = 0;

    printf("Enter a sentence: ");
    while ((input = getchar()) != '\n')
    {
        switch (toupper(input))
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            count++;
            break;
        }
    }
    printf("sentence contains %d vowels.\n", count);
    return 0;
}
