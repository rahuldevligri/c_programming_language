#include<stdio.h>

int main(){
    int x;
    printf("Enter the number ");
    scanf("%d", &x);
    
    if (x%2==0)
    {
        printf("%d is Even number",x);
    }
    else
    {
        printf("%d is odd number",x);
    }



    return 0;
}