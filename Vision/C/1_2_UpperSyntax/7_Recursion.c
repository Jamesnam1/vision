#include <stdio.h>


void draw(int h);

int main(){
    int height =0;

    printf("How many times : ");
    scanf("%d", &height);

    draw(height);

    return 0;

}

void draw(int h){
    if(h==0) {
        return;
    }

    draw(h-1);

    for (int i=0; i < h ; i++){
        printf("#");
    }
    printf("\n");


    // for (int i = 1; i <= h; i++){
    //     for (int j = 1; j <= i; j++){
    //         printf("#");
    //     }
    //     printf("\n");
    // }

}
