//print => 1 -1 1 -1 1

#include<stdio.h>

void main()
{
  int term,cnt,n;
  printf("Enter a no. of Row: ");
  scanf("%d",&n);
 // for(term=1,cnt=1;cnt<=n;term=-term,cnt++) 
  for(term=cnt=1;cnt<=n;term=term*-1,cnt++)
  {
    printf("%d ",term);
  }    
}