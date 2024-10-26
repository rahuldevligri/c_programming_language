//print => table of users choise 

#include<stdio.h>

void main()
{
  int i,n;
  printf("Enter a no.: ");
  scanf("%d",&n); 
  for(i=1;i<=10;i++)
  {
    printf("%4d X %4d = %4d\n ",n,i,n*i);
      // Space print 4 times in left when you write %4d 
      // 4 means 4 times space including printing number.

  }  
  
 for(i=1;i<=10;i++)
  {
      printf("%-4d X %-4d = %-4d\n ",n,i,n*i);
        // Space print 4 times in Right when you write %-4d
        // -4 means 4 times space including printing number.
  }
  
  for(i=1;i<=10;i++)
  {
printf("%04d X %04d = %04d\n ",n,i,n*i);
        // 0 print alwaysleft when you write %04d 
                                        // 04 means 4 times number including 0.        
    // you can't print zero on right.

  }  
}