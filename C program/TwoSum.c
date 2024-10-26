#include<stdio.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    returnSize[2];
  for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
       if(nums[i] + nums[j] == target){
           returnSize[0] = i;
           returnSize[1] = j; 
           break;
        }
      }
    }
}

void main()
{
    int nums[10],target,numSize,returns[4];
    printf("Enter Size of an array : ");
    scanf("%d",&numSize);
    printf("Enter Target of an Array: ");
    scanf("%d",&target);
    for (int i = 0; i < numSize; i++)
    {
        printf("Enter %d element of an Array: ",i);
        scanf("%d",&nums[i]);
    }
twoSum(nums,numSize,target,returns);
     for (int i = 0; i < 2; i++)
    {
        printf("%d ",returns[i]);
    }
}