//Demonstration of call by value & call by reference.

#include<stdio.h>
void display1(int arr){ //Call by value
    printf(" %d ",arr);
}
void display2(int *arr){ //call by reference
    printf(" %d ",*arr);
}
int main(){
int marks[] = {55,65,75,56,78,78,90};
for(int i=0;i<7;i++)
   display1(marks[i]); //function call
printf("\n");   
for(int i=0;i<7;i++)
   display2(&marks[i]);  //function call
return 0;
}