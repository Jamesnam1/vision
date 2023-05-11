#include <stdio.h>
#define scanf_s scanf

int main(){

    int previous=0, next =1, result =1, n=0;
    printf("Enter a number : ");
    scanf_s("%d", &n);

    do {
        printf("%d  ", result);
        result = previous + next;
        previous = next;
        next = result;
    }while(result <= n);

    return 0;

}