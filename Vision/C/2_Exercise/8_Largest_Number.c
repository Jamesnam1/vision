#include <stdio.h>
#define scanf_s scanf

int main(){

    int num[5];
    int result = 0;

    printf("Input 5 different numbers: ");
    for(int i=0; i<5; i++){
        scanf_s("%d", &num[i]);
    }
    result = num[0];
    for(int i=0; i<5; i++){
        if(result < num[i]){
            result = num[i];
        }
    }

    printf("The largest number is: %d", result);

    
    // int a = 0;
    // int b = 0;
    // int c = 0;
    // int d = 0;
    // int e = 0;
    // printf("Input 5 different numbers: ");
    // scanf_s("%d %d %d %d %d", &a, &b, &c, &d, &e);

    // if(a>b && a>c && a>d && a>e){
    //     printf("%d is the biggest number.", a);
    // }

    // else if(b>a && b>c && b>d && b>e){
    //     printf("%d is the biggest number.", b);
    // }
    // else if(c>a && c>b && c>d && c>e){
    //     printf("%d is the biggest number.", c);
    // }
    // else if(d>a && d>b && d>c&& d>e){
    //     printf("%d is the biggest number.", d);
    // }
    // else if(e>a && e>b && e>c &&e>d){
    //     printf("%d is the biggest number.", e);
    // }

    return 0;

}