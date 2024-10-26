#include<stdio.h>
int swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a=2,b=4;
    printf("before swap \n a=%d \n b=%d",a,b);
    swap(&a,&b);
    printf("\nafter swap \n a=%d \n b=%d",a,b);
    return 0;
}