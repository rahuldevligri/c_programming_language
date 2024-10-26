#include <stdio.h>

int main(){
int i,a[10],sum=0;
float ave;
    printf("Enter 10 Number \n");
for(i=0;i<=9;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<=9;i++){
sum = sum+a[i];
}  
ave = sum /10.0;
printf("Average is %f ",ave);  
    return 0;
}