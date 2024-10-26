main()
{
    int i,num,a=1,b=2;
    printf("Enter a number");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        printf("%d ",a);
        a=a+b;
        b++;
    }
}

