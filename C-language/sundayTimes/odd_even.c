#include <stdio.h>

int main(){
    int x;
       printf("Enter a number\n");
       scanf("%d", &x);

       if (x%2==0)
       {
           printf("Even number");
       }
       else
       {
           printf("Odd number");
       }
    return 0;
}