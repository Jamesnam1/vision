#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define scanf_s scanf

int main(){

    char name[20];
    printf("name : ");
    scanf_s("%s", name);

    char *temp = malloc(strlen(name) + 2);
    char *name_copy = malloc(strlen(name) + 2);
    //shift + alt +arrow key to duplicate

    //Classic
    for(int i=0, n = strlen(name); i < n ; i++){
        temp[i] = name[i]; //temp[0] ~ temp[19]
    }

    temp[strlen(name)] = '\0';

    temp[0] = toupper(temp[0]);

    printf("name : %s \n", name);
    printf("temp : %s \n", temp);

    //string function
    strcpy(name_copy, name);
    printf("name_copy: %s\n", name_copy);

    strcat(temp, name_copy);
    printf("Temp : %s", temp);

    //not done correctly
    if (strcmp(temp, name)){
    printf("\nequal");
    }
    else {printf("\nFlase");
    }

    free(temp);
    free(name_copy);


    // strlen() // length of string
    // strcat() // union string
    // strcpy() // copy
    // strcmp() // compare
    // toupper() //convert to uppercase
    // tolower() //convert to lowecase
    // atoi()   //convert to number integer // atod() double

    return 0;
}
