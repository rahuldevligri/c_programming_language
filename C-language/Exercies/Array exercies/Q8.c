#include <stdio.h>

void count(int *arr,int num){
    int countpos=0,countneg=0,i;
for(i=0;i<num;i++){
    printf(" %d ",arr[i]);
    if(arr[i]<=0){
     countpos++;
    }
    else
        if(arr[i]>0){
        countneg++;
        }
}
  printf("negative num = %d\n",countneg);
  printf("positive num = %d\n",countpos);
}
int main(){
int c,arr[10]={-1,-2,3,-4,5,-6,-7,8,-9,10};
    count(arr,10);
    return 0;
}