/*Write a program having a variable i. Print the address of i. 
Pass this variable to a function and print its address. 
Are these addresses same? Why? */

#include<stdio.h>
void printAdd(int a){
    printf("The Address of Variable a is %u\n",&a);
}
int main(){
    int i=5;
    printf("The Value of Variable i is %u\n",i);
    printAdd(i);
    printf("The Address of Variable i is %u\n",&i);
}