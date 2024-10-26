/* write a function to print pow of a nummber.*/

int pow(int a,int b)
{
    if(b==1)
            return a;      
    return a*pow(a,b-1);
}
void main()
{
    int a,b=3;
    printf("Enter a no");
    scanf("%d",&a);
    printf("power of %d is %d",a,pow(a,b));
}