#include <stdio.h>

int main(){
    int age = 17;
    char name[20] = "JAMES NAM";    //name[]    []:array   char[] ; string

    printf("%s  \n", name);         //\n : New line   | %s used for words | %c used for alphabets
    printf("%c \n", name[8]);
    printf("Hello! \t %s \n", name); // \t : tab
    printf("Hello! \t %s", name);
    printf("Hello! \n %s \t", name);
    printf("\nHello! \"%s\" ", name);

    return 0;
}