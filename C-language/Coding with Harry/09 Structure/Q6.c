/*
Create an array of 5 complex numbers created in problem 
5 and display them with the help of a display function. 
The values must be taken as an input from the user.
*/

#include<stdio.h>

typedef struct complex{
    int real;
    int imaginary;
}comp;

void display(comp c){
    printf("the value of real part is %d\n",c.real);
    printf("the value of imaginary part is %d\n",c.imaginary);
}

int main(){
    comp cnums[5];
    for(int i=0;i<5;i++){
        printf("enter the real value for %d num\n",i+1);
        scanf("%d",&cnums[i].real);

        printf("Enter the imaginary value for %d num\n",i+1);
        scanf("%d",&cnums[i].imaginary);
    }
    for(int i=0;i<5;i++){
        display(cnums[i]);
    }
    return 0;
}