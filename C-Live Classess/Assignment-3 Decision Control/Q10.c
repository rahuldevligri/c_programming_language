#include<stdio.h>
#include<conio.h>

void main()
{
    int m,p,c,h,e,marks;
    char grade;

    printf("Enter Math, Physics, Chemistry, Hindi and English Subject marks:\n");
    scanf("%d%d%d%d%d",&m,&p,&c,&h,&e);

        marks = m+p+c+h+e;

  if (marks>=451)
  {
      grade = 'A';
      printf("Your Grade is %c ",grade);
  }
   else
   {
        if(marks>=350 || marks<=450)
printf("Your Grade is %c ",grade);
   }

}
