//Write a program using functions to find thee average of three numbers.?

#include <stdio.h>
float average(int a, int b, int c);
int main(){
    int a,b,c;
        printf("Enter Three values\n");
        scanf("%d%d%d",&a,&b,&c);
    printf("The Value of Average is %f",average(a, b, c));
    
    return 0;
}
float average(int a, int b, int c){
    float result;
    result = (float)(a + b + c)/3;
    return result;
}