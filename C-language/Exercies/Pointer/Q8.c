// Write a program in C to demonstrate the use of 
// &(address of) and *(value at address) operator.

#include<stdio.h>

int main(){
    int i=6;
    float f=6.5;
    char c= 'R';
    
    printf("\n\n Pointer : Demonstrate the use of & and * operator :\n"); 
    printf("--------------------------------------------------------\n");
  
    int *int_ptr = &i;
    float *float_ptr = &f;
    char *char_ptr = &c;

    printf("i = %d\n",i);
    printf("j = %.2f\n",f);
    printf("c = %c\n",c);

    printf("\n Using & operator :\n"); 
    printf("-----------------------\n");  
    printf ( " address of i = %u\n",&i);
    printf ( " address of f = %u\n",&f);
    printf ( " address of c = %u\n",&c);

    printf("\n Using & and * operator :\n"); 
    printf("-----------------------------\n"); 
    printf ( " value at address of i = %d\n",*(&i));
    printf ( " value at address of f = %.2f\n",*(&f));
    printf ( " value at address of c = %c\n",*(&c));

    printf("\n Using only pointer variable :\n"); 
    printf("----------------------------------\n"); 
    printf ( " address of i = %u\n",int_ptr);
    printf ( " address of f = %u\n",float_ptr);
    printf ( " address of c = %u\n",char_ptr);
    printf("\n Using only pointer operator :\n"); 
    printf("----------------------------------\n"); 
    printf ( " value at address of i = %d\n",*int_ptr);
    printf ( " value at address of f = %.2f\n",*float_ptr);
    printf ( " value at address of c = %c\n\n",*char_ptr);
    return 0;
}