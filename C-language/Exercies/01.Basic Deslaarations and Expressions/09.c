/* Wrete a program that accepts two items weight
(floating  points values) and number of purchase
(floating points values) and calculate the average 
value of the items.? */

#include <stdio.h>

int main(){
double item1,item2,purches,weight1,weight2,average;

printf("enter the number of item1 ");
scanf("%lf", &item1);
printf("enter the weight of item1 ");
scanf("%lf", &weight1);

printf("enter the number of item2 ");
scanf("%lf", &item2);
printf("enter the weight of item2 ");
scanf("%lf", &weight2);

average = ((weight1*item1) + (weight2*item2)) / (item1 + item2);
printf("Average Value = %f ", average);
    return 0;
}