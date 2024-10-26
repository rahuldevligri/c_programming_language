//Write a function to convert celsius temperature into fahrenheit.?

#include <stdio.h>
float temp(float farh ,float cel);
int main(){
int cel, farh;
    printf("Enter Celsius value ");
    scanf("%d",&cel);

    printf("The Temperature of Fahrenheit to Celsius is %f ",temp(farh , cel));
    
    return 0;
}
float temp(float farh,float cel){
   float result;
   result = (float)(cel * 9/5) + 32;
   return result;
}