#include <stdio.h>
#define scanf_s scanf


    //data type: int, float....
    //data structure: Array : char name[20] or int array[3], Strucutre: many variety types of datatype in one variable.

struct students {
    int studentid;
    char name[20];
    int score_eng;
    int score_math;
};

struct teachers {
    int teacherid;
    char name[20];
    int score_eng;
    int score_math;
};

int main(){


    struct students nam;
    struct teachers Luu;


    nam.studentid = 1;
    printf("Input fullname: ");
    scanf_s("%s", nam.name);
    nam.score_eng = 65;
    nam.score_math = 97;

    Luu.teacherid = 20;
    printf("Input fullname: ");
    scanf_s("%s", Luu.name);
    Luu.score_eng = 96;
    Luu.score_math = 90;

    printf("Nam's info - id : %d \t fullname : %s \t eng score: %d \t math score: %d", nam.studentid, nam.name, nam.score_eng, nam.score_math);
    printf("\nLuu's info - id : %d \t fullname : %s \t eng score: %d \t math score: %d", Luu.teacherid, Luu.name, Luu.score_eng, Luu.score_math);

    return 0;
}