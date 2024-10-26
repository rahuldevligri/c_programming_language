#include <stdio.h>

int main(){
int a=1,b=1;
printf("enter the number ");
scanf("%d", &a);
while (b<=10){
    printf(" %d X %d = %d \n ",a,b,a*b);
    b++;
}
return 0;
}