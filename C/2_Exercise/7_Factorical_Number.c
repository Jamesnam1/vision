#include <stdio.h>
#define scanf_s scanf



int main(){

    int n = 0;
    printf("Input a factorable number: ");
    scanf_s("%d",&n);

    for(int i = n-1; i>0; i--){
        n*=i;
    }
    printf("Factorial Number of is: %d", n);

    // int n,a,b = 1;

    // printf("Input a factorable number: ");
    // scanf_s("%d", &n);

    // for(a=1; a <= n; a++){
    //     b = b * a ;
    // }

    // printf("Factorial Number of %d is : %d", n, b);


    return 0;
}