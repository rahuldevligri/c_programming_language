#include<stdio.h>
//Question3--> Step by step evaluatuon of 3*X/Y-Z+R
int main(){
    int X = 2,Y = 3, Z =3, R = 1;
    int result = 3 * X / Y - Z + R;
    /* 6 / 3 - 3 + 1 
       2 - 3 + 1
       0               */
    printf("The value of result is %d", result);
    return 0;
}