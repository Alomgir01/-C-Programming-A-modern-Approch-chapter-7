int main()
{
    int u,o,x,s,l,ll;
    printf("Enter u: "); //unsigned
    scanf("%u",&u);
    printf("%u\n",u);
    {
        printf("Enter o: "); //octal based
        scanf("%o",&o);
        printf("%o\n",o);
    }
    {
        printf("Enter x: ");   //hexa-decimal
        scanf("%x",&x);
        printf("%x\n",x);
    }
    {
        printf("Enter s: "); // short integer
        scanf("%hd",&s);
        printf("%hd\n",s);
    }
    {
        printf("Enter ld: ");  //long integer
        scanf("%ld",&l);
        printf("%ld\n",l);
    }
    {
        printf("Enter ll: "); //long long integer
        scanf("%lld",&ll);
        printf("%lld\n",ll);
    }
}
