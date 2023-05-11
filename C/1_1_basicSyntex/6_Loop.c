#include <stdio.h>
#define scanf_s scanf

// while(conditional) { } during conditional == true , similar to if
// for(i=0; i<n; i++) { } Looping nth 

int main(){
    // printf("--------------\n");
    // printf("- [1] Cola -\n");
    // printf("- [2] Milkis -\n");
    // printf("- [3] Cider -\n");
    // printf("- [4] Coffee -\n");
    // printf("- [5] exit -\n");
    // printf("--------------\n");

    // int select = 0;      // input right side to left side
    // while(select != 5){  // != : not equal to 
    //     scanf_s("%d", &select);

    //     switch(select) {
    //         case 1:
    //             printf("\nHere is a can of Cola\n");
    //             break;
    //         case 2:
    //             printf("\nHere is a can of Milkis\n");
    //             break;
    //         case 3:
    //             printf("\nHere is a can of Cider\n");
    //             break;
    //         case 4:
    //             printf("\nHere is a can of Coffee\n");
    //             break;
    //         case 5:
    //             printf("\nexit\n");
    //             break;
    //         default:
    //             printf("\nInput error");
    //             break;

    //     }
    // }

    int i = 0;
    // for( init ; conditional ; how to change )
    // % : remainder, ^ : exponents, += -= /= ((ex) i = i + 6 = 11)
    // i++ : i = i + 1

    
    for(i = 0 ; i < 5; i++) {
        printf("%d", i);
    }


    // while :  ex) gameover Hp <= 0 (keeps looping until Hp <=0) Until when
    // for :    ex) 구구단 만들대 how many times you want to loop

    return 0;
}