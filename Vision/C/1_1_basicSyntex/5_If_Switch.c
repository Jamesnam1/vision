#include <stdio.h>
#define scanf_s scanf

int main(){
    int run = 0;    // 0 : False, Else : True
    // If statement
    if(run){
        printf("True\n");
        if(run){
            printf("one more true\n");
        }
    }
    else if(run){
        printf("False\n");
    }
    else {
        printf("error\n");
    }
    // Switch statement
    printf("--------------\n");
    printf("- [1] Cola -\n");
    printf("- [2] Milkis -\n");
    printf("- [3] Cider -\n");
    printf("- [4] Coffee -\n");
    printf("--------------\n");

    int select = 0;
    scanf_s("%d", &select);

    switch(select) {
        case 1:
            printf("\nHere is a can of Cola");
            break;
        case 2:
            printf("\nHere is a can of Milkis");
            break;
        case 3:
            printf("\nHere is a can of Cider");
            break;
        case 4:
            printf("\nHere is a can of Coffee");
            break;
        default:
            printf("\nInput error");
            break;

    }

        // if statement : range    ex) age 1-30 ->, 30-60 ->
        // switch statement : point    ex) button
    return 0;
}