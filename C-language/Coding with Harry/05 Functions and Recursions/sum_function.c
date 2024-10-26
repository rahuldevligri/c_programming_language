#include<stdio.h>
//sum is a function which takes a and b as input and returns integer as an output
int sum(int a, int b); //function prototype declaration
int main(){
    int c;
    c = sum(2, 5); //function call
    printf(" 2 + 5 = %d",c);
    return 0;
}
int sum(int a, int b){ //function defination
    int result;
    result = a + b;
    return result;
}