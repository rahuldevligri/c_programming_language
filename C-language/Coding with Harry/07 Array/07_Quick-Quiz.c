#include<stdio.h>
int main()
{
    int num = 22, num2=44,x;
    int *ptr,*ptr2;
    ptr = &num;
        printf("the address of num1 : %d is %u\n",num,ptr);
    ptr += 2; //Addition of a number to a pointer.
        printf("After the addition of a number to a pointer : %u\n",ptr);

    ptr -= 1; //Subtraction of a number from a pointer
        printf("After the Subtraction of a number from a pointer : %u\n",ptr);

    ptr2 = &num2;
        printf("the address of num2 : %d is %u\n",num2,ptr2); 

    x = ptr - ptr2; //Subtraction of one pointer from another
        printf("After the Subtraction of one pointer from another : %u\n",x);
    
        if(ptr>ptr2) //Comparison of two pointer variables
          printf("pointer-1 : %u is greater then pointer-2 : %u ",ptr,ptr2);
        else
          printf("pointer-2 : %u is greater then pointer-1 : %u ",ptr2,ptr);
            
    return 0;
}