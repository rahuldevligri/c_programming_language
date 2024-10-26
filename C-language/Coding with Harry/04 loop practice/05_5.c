#include<stdio.h>
int main(){
    int n,i=1,sum=0;
    printf("Enter the number you want to sum ");
    scanf("%d",&n);
    do
    {
        sum+=i;
        i++;
       
    } while (i<=n);
        printf("the sum of %d is %d\n",n,sum);
    

    return 0;
}