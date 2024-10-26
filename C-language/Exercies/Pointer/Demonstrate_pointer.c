#include<stdio.h>

int main(){
    int i = 6;
    int *j = &i;
      // j = &i;
    printf("Address of i is %u\n",&i);  
    printf("Address of i is %u\n",j); 
    printf("Address of j is %u\n",&j);
    printf("Value of i is %d\n",i);
    printf("Value of i is %d\n",*(&i));
    printf("Value of i is %d\n",*j);
    printf("Value of j is %d\n",*(&j));
    printf("Value of j is %d\n",j);
    return 0;
}