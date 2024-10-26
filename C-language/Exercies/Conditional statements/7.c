#include <stdio.h>

int main(){
   if(sizeof(int)>-1) //sizeof = 4 bytes , value = unsigned int
        printf("Hi");
    else
        printf("Hello");
    return 0;
}