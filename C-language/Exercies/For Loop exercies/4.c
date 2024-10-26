#include <stdio.h>

int main(){
int i,n,sum=0;
float average;
printf("Enput the 10 numbers :");
        
for(i=1;i<=10;i++)
    {
        printf(" %d ", i );
        sum+=i;
        
    }
        average = sum/10.0;
        printf("\nThe sum is %d ",sum);
     printf("\naverage is %f\n ",average);
        
    return 0;
}  