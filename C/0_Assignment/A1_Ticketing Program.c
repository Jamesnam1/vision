#include <stdio.h>
#define scanf_s scanf

//[Ticketing Program]
        //1. input age, tell me if they are either a adult or a child
        //2. price depending on their age
        //3. menu "Adult" ------- "child/children" ......
        //4. How many people? Adult _, child/children _


int main(){
    printf("Buy your tickets!\n");
    printf("----------------------\n");
    printf("Adult price: $25\n");
    printf("Child price: $18\n");
    printf("---------------------\n");
    
    
    int age = 0;
    int adult = 0;
    int children = 0;

    printf("Input your age :");
    scanf_s("%d", &age);
    if (age >= 19){
        printf("You are an adult, ticket price is $25.");
    }
    else {
        printf("You are a child, ticket price is $18.");
    }
    if (age >= 19){
        printf("\nInput number of adults :");
        scanf_s("%d", &adult);
        printf("$%d is your total.", 25*adult);
    }
    else {
        printf("\nInput number of children :");
        scanf_s("%d", &children);
        printf("$%d is your total.", 18*children);
    }

    return 0;
}