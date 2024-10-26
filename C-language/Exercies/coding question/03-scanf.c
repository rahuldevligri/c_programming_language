#include<stdio.h>

int main(int argc, char const *argv[])
{
   float celsius , fahrenheit;
   printf("enter the value of celsius temprature \n");
   scanf("%f", &celsius);

   fahrenheit =  (celsius * 9/5)+32;
   printf("The value of this celsius temprature in fahrenheit is %f", fahrenheit);

   

   
    return 0;
}
