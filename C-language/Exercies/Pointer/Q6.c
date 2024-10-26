/* Write a program to change the value of a variable to 
   ten times its current value. Write a function and pass 
   the value by call by value and verify that
   it doesn’t change the value of the said variable.
*/   

#include<stdio.h>

int wrong_swap(int i){
   i=10;
}
int main(){
    int i=4,c;
    wrong_swap(i);
    printf("THe value of i is %d",wrong_swap(i));
    return 0;
}