#include<stdio.h>

int main(){
    int m,n,o;
    printf("Enter a Year ");
    scanf("%d",&m);
o=m > 0 ? 1 :(m < 0 ?-1:0);
 printf("%d",o);
    return 0;
}