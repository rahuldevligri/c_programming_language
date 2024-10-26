//1.Write a program to swap values of two int variables.

main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("Before swapping a=%d and b=%d",a,b);

    a = a+b;
    b = a-b;
    a = a-b;
    printf("\nAfter swapping a=%d and b=%d",a,b);

}
