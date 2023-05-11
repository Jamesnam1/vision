#include <stdio.h>
#define scanf_s scanf

int main(){
    int numbers = 0;

    printf("Input a number: ");
    scanf_s("%d", &numbers);

    int number = 0;
    printf("Input another number: ");
    scanf_s("%d", &number);

    if(numbers > number){
        printf("%d is a bigger number.", numbers);
    }
    else if(numbers <  number){
        printf("%d is a bigger number.", number);
    }
    else{
        printf("\nError, please input a valid number.");
    }

    return 0;
}