#include <stdio.h>
int sum(int n);
int main(){
    int num;
        printf("Enter a positive integer :");
        scanf("%d",&num);
    printf("The sum of first %d numbers is %d.", num, sum(num));
    return 0;
}
int sum(int n){
    if (n==0){
        return 0;
    }
    else{
        return n + sum(n-1);
    }
}