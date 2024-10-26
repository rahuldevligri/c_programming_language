#include <stdio.h>
int sum (int a, int b);
int main(){
    int c;
   c = sum(3, 5);
    printf("3 - 5 = %d",c);
    return 0;
}
int sum(int a, int b){
    int c;
    c = a-b;
    return c;
}