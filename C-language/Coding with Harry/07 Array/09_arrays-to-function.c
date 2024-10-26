#include <stdio.h>
// void printArray(int *ptr,int n)
void printArray(int ptr[],int n)
{
    for(int i=0; i<n; i++)
    {
     // printf("The Value of element %d is %d\n",i+1, *(ptr+i));
        printf("The Value of element %d is %d\n",i+1, ptr[i]);
    }
    ptr[2] = 22; //This value will be change in main as well...
}
int main(){
    int arr[] = {10,30,20,40,60,50,70};
    printArray(arr, 7);
    printf("array[3] = 20 is now %d",arr[2]);
    return 0;
}