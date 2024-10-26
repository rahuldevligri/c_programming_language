/* Write a program in C to demonstrate how 
   to handle the pointers in the program.
*/

#include<stdio.h>

int main(){
    int i=34;
    int *j;
    printf("The value of i is %d\n",i);
    printf("The address of i is %u\n",&i);

    j=&i;
    printf(" Now j is assigned with the address of i.\n");
    printf("The value of j is %d\n",j);
    printf("The value of i is using *j %d\n",*j);
    printf("The address of i is %u\n",&j);

    *j=35;
     printf(" The pointer variable ab is assigned the value 35 now.\n");
   printf(" Address of i : %u\n",&i);//as j contain the address of i
                                     //so *j changed the value of i and now i become 35
   printf(" Value of mi: %d\n\n",i);
    return 0;
}