//Write a program to print first N natural numbers.

main()
{
    int j,i=1;
    printf("Enter a Number: ");
    scanf("%d",&j);
    do
    {
        printf("%d ",i);
        i++;
    }while(i<=j);
}

