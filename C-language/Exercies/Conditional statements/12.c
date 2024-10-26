#include <stdio.h>

int main(){
int x=5;
   if(x-5)
     printf("Hello");
     printf(" %d ",x); 
   else               //error: 'else' without a previous 'if'
       printf("Bye");      
       return 0;
}