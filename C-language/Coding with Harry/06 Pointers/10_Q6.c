/* Try problem 3 using call by value and verify that
 it doesn’t change the value of the said variable. */

#include <stdio.h>

#include <stdio.h>
void change(int a){
    int tmp;
       tmp = a;
    a = tmp * 10;
    return tmp;   
}
int main(){
int i=4; 
  
    printf("The value of variable i is %d\n",i);
change(i);
    printf("The current value of variable i  is %d\n",i);
    return 0;
}