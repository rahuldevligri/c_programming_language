#include <stdio.h>

void main()
{
    int arr1[];
    int i, mx, mn, size=10;
   
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<size;i++)
        {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }


    mx = arr1[0];
    mn = arr1[0];

    for(i=1; i<size; i++)
    {
        if(arr1[i]>mx)
        {
            mx = arr1[i];
        }


        if(arr1[i]<mn)
        {
            mn = arr1[i];
        }
    }
    printf("Maximum element is : %d\n", mx);
    printf("Minimum element is : %d\n\n", mn);
}
