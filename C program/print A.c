#include<stdio.h>

int main()
{
int n,i,j,k,l,m;
    printf("Enter a number");
    scanf("%d",n);
 for(i=1;i<=n;i++)
 {
    for(j=1;j<=n-i;j++){
          printf(" ");}
    for(k=1;k==1;k++){
          printf("*");}
    for(l=1;l<=2*(i-1)-1;l++){
        if(i==3)
          printf("*");
        else
          printf(" ");}
    for(m=1;m==1;l++){
        if(i>=2)
          printf("*");}
    printf("\n");
 }
    return 0;
}