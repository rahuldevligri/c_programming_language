#include <stdio.h>

int main(){
  int num;
    printf("Enter a number ");
    scanf("%d", &num);

    printf("%d X 1 = %d\n%d X 2 = %d\n%d X 3 = %d\n",num,num*1,num,num*2,num,num*3);

    printf("%d X 4 = %d\n%d X 5 = %d\n%d X 6 = %d\n",num,num*4,num,num*5,num,num*6);

    printf("%d X 7 = %d\n%d X 8 = %d\n%d X 9 = %d\n",num,num*7,num,num*8,num,num*9);

    printf("%d X 10 = %d\n",num,num*10);
  return 0;
}