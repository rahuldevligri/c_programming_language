//5. Write a program to print first 10 even natural numbers.
main()
{
    int i=1;

    do
    {
        if(i%2==0)
        printf("%d ",i);
        i++;
    }while(i<=2*10);
}

