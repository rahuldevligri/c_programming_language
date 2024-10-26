/* Calculate Simple Interest */

#include <stdio.h>
#include<conio.h>

int main(){
    int principal,time;
    float interest,si;
    printf("***Calculate Simple Interest***");
    printf("\nEnter principal, Rate of interest and Numbers of years:\n");
    scanf("%d%f%d",&principal,&interest,&time);
    si = (principal*interest*time)/100;
    printf("Simple Interest = %f",si);
    getch();
    return 0;
}