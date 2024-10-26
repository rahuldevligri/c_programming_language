//1.Write a program to swap values of two int variables.

main()
{
    int a=5,b=6,temp;
    printf("Before swapping a=%d and b=%d",a,b);

    temp = a;
    a = b;
    b = temp;
    printf("\nAfter swapping a=%d and b=%d",a,b);
}
