#include<stdio.h>

int main(){
    int physics, chemistry, maths;
    float total;
        printf("Enter your physics marks\n");
        scanf("%d", &physics);

        printf("Enter your chemistry marks\n");
        scanf("%d", &chemistry);

        printf("Enter your maths marks\n");
        scanf("%d", &maths);
        
        total = (physics + chemistry + maths)/3;
        
        if((total<40) || physics<33 || maths<33 || chemistry<33)
        {
            printf("Your total persent is %f and you are fail\n", total);
        }
        else
        {
            printf("Your total persent is %f and you are pass\n", total);
        }
        
    return 0;
}