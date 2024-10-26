/* Write a program having a variable i. Print the address of i. 
   Pass this variable to a function and print its address. 
   Are these addresses same? Why? */

   #include <stdio.h>
   void printAdd(int a){
        printf("the address of variable a is %u\n", &a);
   }
   int main(){
        int i = 6;
            printf("The value of variable i is %d\n",i);
        printAdd(i);
            printf("The value of variable i is %d\n",&i);

    return 0;
   }