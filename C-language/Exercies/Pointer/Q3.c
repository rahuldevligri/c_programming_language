/* Write a program to change the value of a 
   variable to ten times its current value. 
   Write a function and pass the value by reference.
*/   

   #include<stdio.h>
   void Add10(int *a){
       int i=*a;
       *a=i*10;
   }
   int main(){
       int i=5;
       printf("The Address of i is %u\n",&i);
       printf("The value of Variable i is %d\n",i);
       Add10(&i);
       printf("The Value of Variable i*10 is %u\n",i);
       printf("The Address of i is %u\n",&i);
       return 0;
   }
