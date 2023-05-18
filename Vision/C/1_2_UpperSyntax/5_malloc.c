#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define scanf_s scanf

int main(){

    char name[20];
    printf("name : ");
    scanf_s("%s", name);

    char *temp = malloc(strlen(name) + 2);
    char *name_copy = malloc(strlen(name) + 2);


    //Classic
    for(int i=0, n = strlen(name); i < n ; i++){
        temp[i] = name[i]; //temp[0] ~ temp[19]
    }

    temp[strlen(name)] = '\0';

    printf("name : %s \n", name);
    printf("temp : %s \n", temp);

    //string function
    strcpy(name_copy, name);
    printf("name_copy: %s\n", name_copy);

    free(temp);
    free(name_copy);

    return 0;
}