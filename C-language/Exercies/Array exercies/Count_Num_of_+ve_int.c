#include <stdio.h>
void PositiveElement(int *num,int n)
{
    int i,count;
    for(i=0;i<n;i++)
    {
        if(num[i] > 0)
        {
            count++;
            printf("Positive number = %d\n", num[i]);    
        }
    }
    printf("Count of Positive elements = %d\n",count); 
}
int main()
{
    int num[10]={ 2, 1, 5, 6, 0, -3,3,-2,3,11 };
    PositiveElement(num,10);   
    return 0;
}