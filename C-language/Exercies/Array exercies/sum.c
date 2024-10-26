#include <stdio.h>

int main(){
int arr[10],sum=0;
float avg;
    printf("Enter 10 numbers:\n");
    
    for(int i=0;i<=9;i++){
    scanf("%d",&arr[i]);
    }
    for (int i = 0; i<=9; i++){
    sum=sum+arr[i];
    }
    avg=sum/10.0;
    printf("the sum of 10 number is %f",avg);
    return 0;
}