#include <stdio.h>
// void mystrcpy(char *source , char *target){
    // char i=0;
    // while(source[i] != '\0'){
    //     target[i] = source[i];
    //     i++;
    //}
void mystrcpy(char *source , char *target){
    int i;
    for(i=0;source[i] != '\0';i++)
    {
        target[i] = source[i];
    }
    target[i]= '\0';
    printf("Now the target is %s",target);
}
int main(){
    char *source = "Rahul";
    char target[45];
    mystrcpy(source, target);
    return 0;
}