// Swapping Without using third variable...

#include <stdio.h>

int main(){
     int a,b,temp;
        printf("Enter Two Numbers:\n");
        scanf("%d%d",&a,&b);
           // a=10 b=20
    a=a+b; //a=10+20...a=30
    b=a-b; //b=30-20...b=10
    a=a-b; //a=30-10...a=20
        printf("a=%d b=%d",a,b); //a=20 b=10
    return 0;
}