// Write a program in C to store n elements in an 
// array and print the elements using pointer.

#include<stdio.h>

int main(){
    int arr[10];
    int *ptr=arr;
    int i;

    for(i=0;i<5;i++){
        printf("element - %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf(" The elements you entered are : \n");
    for(i=0;i<5;i++){
        printf("element - %d: %d\n",i+1,arr[i]);
    }
    return 0;
}