#include <stdio.h>

int main(){
    char str[] = "RAHUL";
    //char str[] = {'R','A','H','U','L','\0'};
    char *ptr = str;
    while(*ptr!=0){
    printf("%c",*ptr);
    ptr++;
    }
    
    return 0;
}