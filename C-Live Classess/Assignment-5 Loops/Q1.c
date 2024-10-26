//Write a program to print sum of squares of first N natural numbers.

main()
{
    int N,count=0;
    printf("Enter a Number: ");
    scanf("%d",&N);
    for(int i=1;i<=2*N;i++)
    {
        count=count+i;
    }
    printf("sum of squares of first %d is %d",N,count);
}
