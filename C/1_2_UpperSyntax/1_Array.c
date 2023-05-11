#include <stdio.h>
#define scanf_s scanf

int main(){
    int score[4]; //eng, math, social, science
    int i = 0;
    printf("input your scores.\n");
    printf("English : ");
    scanf_s("%d",&score[i++]); //difference between i++ : plus after ; while ++1 plus before ;

    printf("Math : ");
    scanf_s("%d",&score[i++]);

    printf("Social : ");
    scanf_s("%d",&score[i++]);

    printf("Science : ");
    scanf_s("%d",&score[i]);

    for(i=0;i<4;i++){
        printf("%d\t", score[i]);
    }
    return 0;
}