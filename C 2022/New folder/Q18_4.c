main()
{
    int i,num,a=2,b=3;
    printf("Enter a number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        printf("%d ",a);
        a=a+b;
        b=b+2;
    }
}

