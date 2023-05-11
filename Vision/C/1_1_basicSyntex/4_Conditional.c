#include <stdio.h>
#define scanf_s scanf

int main(){
    int age = 0;
    char name[20];

    printf("Input your age : ");
    scanf_s("%d", &age);            //_s : memory security 
    printf("Input your name : ");
    scanf_s("%s", name, 20*sizeof(char));

    if (age >= 16) {                        // >, <, >=, <=, ==,          ||: OR,       &&: AND,        !:not(opposite) 
        printf("You can get a Driver License.");
    }
    else {
        printf("You are too young to get a Driver License.");
    }

    return 0;

    if(sex =='male' && age > 35){

    }
    else if (sex ='male' && (age > 21 && age <=35)){

    }
    else if (sex ='male' && (age > 32 && age <=45)){
    
    }

