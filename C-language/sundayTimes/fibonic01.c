#include <stdio.h>

int main(){
    int x,i,a=-1,b=1,c;
    printf("Enter a number\n");
    scanf("%d", &x);
    for (i = 1; i <=x; i++)
    {
     c=a+b;
     printf(" %d ", c );
     a=b;
     b=c;


    }
    
    return 0;
}