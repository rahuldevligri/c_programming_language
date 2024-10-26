main()
{
    int n,i,p=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
            p++;
    }
      if(p<=2)

            printf("prime");
        else
            printf("not prime");
}

