#include<stdio.h>
int main(){
    int a[5];
    int i,j,min,max,n=4;

    // printf("Enter the Number ");
    // scanf("%d",&n);

    printf("the num of ele is %d \n", n);
    for(i=0;i<4;i++){
        printf(" %d ", i);
        scanf("%d",a[i]);
    }
    min=a[0];
    max=a[0];
    for(i=0;i<n;i++){
        if(a[i]>max){
            max =a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
     printf("Maximum element is : %d\n", max);
    printf("Minimum element is : %d\n\n", min);
    return 0;
}