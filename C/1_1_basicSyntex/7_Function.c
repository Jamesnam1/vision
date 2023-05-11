#include <stdio.h>
#define scanf_s scanf

float volume_cube(float width, float height, float length){
    return width * height * length;
}


int main(){
    float a = 0;
    float b = 0;
    float c = 0;

    printf("input the cube's width, height and length:\n");
    scanf_s("%f %f %f", &a, &b, &c);

    float volume = 0;
    volume = volume_cube(a, b, c);

    printf("\n\ncube's volume : %f", volume);
    return 0;
}