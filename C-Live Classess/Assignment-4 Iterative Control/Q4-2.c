//4. Write a program to print first N natural numbers in reverse order.

main()
{
    int j,i;
    printf("Enter a Number: ");
    scanf("%d",&j);
    i=j;
    do
    {
        printf("%d ",i);
        i--;
    }while(i>=1);
}

