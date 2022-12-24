#include<stdio.h>
#include<ctype.h>
int main()
{
    char word;
    int value=0;

    printf("Enter a word : ");
    while((word=getchar())!='\n')
    {
      switch(toupper(word))
        {
        case 'A':case 'E':case 'I':case 'L':case 'N':case 'O':case 'R':case 'S':case 'T':case 'U':
            value=value+1;
            break;

        case 'D':case 'G':
            value=value+2;
            break;

        case 'B':case 'C':case 'M':case 'P':
            value=value+3;
            break;

        case 'F':case 'H':case 'V':case 'W':case 'Y':
            value=value+4;
            break;

        case 'K':
            value=value+5;
            break;

        case 'J':case 'X':
            value=value+8;
            break;

        case 'Q':case 'Z':
            value=value+10;
            break;
        }
    }
    printf("Scrabble value: %d",value);
}
