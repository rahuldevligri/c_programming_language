#include<stdio.h>
int fact(int n){
    if (n==0){
        return 1;
    } // && n==1
    else{
        return n*fact(n-1);
    }
}
int main(){
    int n,f;
        printf("Enter a number:");
        scanf("%d",&n);
    f=fact(n);
        printf("\n Factorial = %d",f);
return 0;        
}