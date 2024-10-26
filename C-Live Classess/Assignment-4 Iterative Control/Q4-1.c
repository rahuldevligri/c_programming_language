//4. Write a program to print first N natural numbers in reverse order.

main()
{
    int j,i;
    printf("Enter a Number: ");
    scanf("%d",&j);
    i=j;
    while(i>=1)
    {
        printf("%d ",i);
        i--;
    }
}
