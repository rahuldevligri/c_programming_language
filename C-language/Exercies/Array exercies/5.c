/* 5.The following program prints all the numbers 
   of that array as well as prints 
   the numbers in backward*/

#include<stdio.h>
int main(){
  int i,a[7];
  a[0] = 2;
  a[1] = 4;
  a[2] = 6;
  a[3] = 8;
  a[4] = 10;
  a[5] = 12;
  a[6] = 14;
   printf("Print all the Numbers : \n");
   for(i=0;i< 7;++i){
    printf("M[%d] = %d \n ",i,a[i]);
    }
    printf("\nFrom End to Beginning : \n");
   for (i = 6; i >= 0; --i){
   printf("M[%d] = %d \n",i,a[i]);
   }
    return 0;
}