/*4. Write a program in C to copy the elements of one array into another array. Go to the editor
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 15
element - 1 : 10
element - 2 : 12
Expected Output :
The elements stored in the first array are :
15 10 12
The elements copied into the second array are :
15 10 12
*/

#include<stdio.h>
int main(){
   int i,ele[3],ele2[3];
   printf("3 Elements in array \n");
   for(i=0;i<=2;i++){
    printf("elements - %d ",i);
       scanf("%d",&ele[i]);
   }
  
   for(i=0;i<=2;i++){
     ele2[i]=ele[i];
   }
       printf("\nThe elements stored in the first array are :\n");
    for(i=0; i<3; i++)
    {
        printf(" %d ", ele[i]);
    }
     printf("\n\nThe elements copied into the second array are :\n");
    for(i=0; i<3; i++)
    {
        printf(" %d ", ele2[i]);
    }
	       printf("\n\n");
    return 0;
}