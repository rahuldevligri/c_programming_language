/* Write a program to change the value of a variable
 to ten times its current value. Write a function 
 and pass the value by reference. */

#include <stdio.h>
void change(int *a){
    int tmp = *a;
    *a = tmp * 10;
}
int main(){
int i; 
    printf("Enter the value of a : ");
    scanf("%d",&i);
    
    printf("The value of variable i is %d\n",i);
change(&i);
    printf("The current value of variable i  is %d\n",i);
    return 0;
}