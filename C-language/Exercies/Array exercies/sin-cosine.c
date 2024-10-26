#include<stdio.h>
#include<math.h>

int main(){
    int i;
    double x;
  for(i=0;i<11;i++)
  {
    x = i/10.0;
    printf("sin (%lf) = %lf \t cos (%lf) = %lf \n",x, fabs(sin(x)),x, fabs(cos(x)));
  }
  //In the C Programming Language, the cos function returns the cosine x.
printf("\n \n");

    return 0;
}