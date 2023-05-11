#include <stdio.h>
#define scanf_s scanf

int main(){
    int age = 0;
    char name[20];

    printf("Input your age : ");
    scanf_s("%d", &age);            //_s : memory security 
    printf("Input your name : ");
    scanf_s("%s", name, 20*sizeof(char));


    printf("Your age : %d \nYour name: %s", age, name);
    return 0;
}