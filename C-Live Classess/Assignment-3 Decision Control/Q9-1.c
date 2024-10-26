/* Write a program to find Greater among Three Numbers*/

void main()
{
    int a,b,c;
    printf("Enter Three Numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
       if(a>c)
        printf("%a is Greater");
       else
        printf("c is Greater");
    }
    else
    {
       if(b>c)
        printf("b is Greater");
       else
        printf("c is Greater");
    }
    getch();
}
