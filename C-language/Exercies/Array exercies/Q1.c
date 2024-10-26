//  Quick Quiz: Write a program to accept marks of five students 
//  in an array and print them to the screen.

#include <stdio.h>

int main(){
int arr[5];
    for(int i=0;i<5;i++){
        printf("ENter the markes of student %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
        printf("Markes of student %d is %d\n",i+1,arr[i]);
    }
    return 0;
}