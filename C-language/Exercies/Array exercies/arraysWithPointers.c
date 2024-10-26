#include <stdio.h>

int main(){
int arr[5],*ptr=arr;
    for(int i=0;i<5;i++){
        printf("Enter the value of marks for student %d \n",i+1);
        scanf("%d",ptr);
        ptr++;
    }
    for(int i=0;i<5;i++){
        printf("The value of marks for student %d is %d \n",i+1,arr[i]);
    }
    return 0;
}