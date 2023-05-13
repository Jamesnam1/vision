#include<stdio.h>
#include <string.h>

int main(){

    // File write //
    FILE *fp;
    char file_buff[100];
    // fp = fopen("memo.csv", "w"); // w : write r : read
    fp = fopen("memo.txt", "w"); 

    if(fp == NULL) printf("File open Failed");
    else printf("File opened Successfully");

    for(int i=1; i <=3; i++){
        printf("\nWrite %dth line: ",i);
        memset(file_buff, 0, sizeof(file_buff));
        scanf("%s", file_buff);
        file_buff[strlen(file_buff)] = '\n';

        fputs(file_buff, fp);
    }
    fclose(fp);


    //File read
    // fp = fopen("memo.csv", "r"); 

    // if(fp == NULL) printf("File open Failed");
    // else printf("File opened Successfully\n");

    // while (fgets(file_buff, sizeof(file_buff), fp) != NULL){
    //     printf("%s", file_buff);
    //     memset(file_buff, 0, sizeof(file_buff));
    // }
    
    // fclose(fp);

    return 0;
}