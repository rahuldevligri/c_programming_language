#include <stdio.h>
int main()
{
int n,i;
float weight[1000],sum=0.0,avg;
printf("Enter the numbers between 1-1000");
scanf("%d",&n);
printf("Ener the weight in array");
for(i= 0;i<n;++i){
printf("Enter weight the %d",i+1);
scanf("%f",&weight[i]);
sum =sum+weight[i];
}
avg= sum/n;
printf("the average weight of elephant seal is:%.4f",avg);
  return 0;
  }