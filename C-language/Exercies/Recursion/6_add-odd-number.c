#include<stdio.h>

int even(int n){
    if(n==1)
    return 1;
    else
    return n+sum(n-2);
} 
int main(){
    int n,s;
        printf("----Add Even Number 1 to n using recursion-----\n");
        printf("Enter value of n:");
        scanf("%d",&n);
    s=sum(n);
        printf("\n Sum of even number is %d",s); 
return 0;          
}