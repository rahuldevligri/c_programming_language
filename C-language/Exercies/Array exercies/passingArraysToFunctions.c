#include <stdio.h>

int funArr(int arr[],int j){
    for(int i=0;i<j;i++)
    // printf("The value of element %d is %d \n",i+1,*(arr+i));
    printf("The value of element %d is %d \n",i+1,arr[i]);
}
int funArr2(int *ptr,int j){
    for(int i=0;i<j;i++)
    // printf("The value of element %d is %d \n",i+1,ptr[i]);
       printf("The value of element %d is %d \n",i+1,*(ptr+i));
}    
int main(){
int arr[]={1,12,113,22,555,666},*ptr=arr;
funArr(arr,6);
funArr2(arr,4);
    return 0;
}