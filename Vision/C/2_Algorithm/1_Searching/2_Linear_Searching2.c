#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

struct people
{
    char *name;    //same as char name[]
    char *number;
};

int main(){
    struct people person[4];
    
    person[0].name = "Nam";
    person[0].number = "6042170536";

    person[1].name = "Brian";
    person[1].number = "7782170536";

    person[2].name = "David";
    person[2].number = "6642170536";

    person[3].name = "Isaac";
    person[3].number = "0102170536";


    int target[] = {23, 45, 72, 50, 92};

    for (int i=0; i < 4; i++){
        if (strcmp(person[i].name, "Isaac") == 0){
            printf("Found : %s \n", person[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}