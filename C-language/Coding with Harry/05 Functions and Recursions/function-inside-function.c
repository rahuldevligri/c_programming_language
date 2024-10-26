#include<stdio.h>

void GoodMorning();
void GoodAfternoon();
void GoodNight();

int main(){
    GoodMorning();
    return 0;
}
void GoodMorning(){
    printf("Good Morning Rahul\n");
    GoodAfternoon();
}
void GoodAfternoon(){
    printf("Good Afternoon Rahul\n");
    GoodNight();
}
void GoodNight(){
    printf("Good Night Rahul\n");
}