#include <stdio.h>
#define scanf_s scanf

int main(){
    int i = 0;
    for(i=0;i<3;i++){;
    
    int number = 0;
    printf("Input a number: ");
    scanf_s("%d", &number);

    if(number % 2 == 0){
        printf("It is a even number.");
    }
    else if(number % 2 == 1){
        printf("It is a odd number.");
    }
    else{
        printf("Error, please enter a vaild value.");
    }
    printf("\n");
    }
    return 0;
}