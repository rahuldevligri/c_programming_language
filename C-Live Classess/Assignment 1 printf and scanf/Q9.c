//Write a program to calculate simple interest.Take user input.

main()
{
    int p,t;
    float si,r;
    printf("Enter Principle, Rate and Time:\n" );
    scanf("%d%f%d",&p,&r,&t);
    si = (p*r*t)/100.0;
    printf("Simple Interest is %f",si);

}
