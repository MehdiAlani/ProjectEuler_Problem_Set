#include <stdio.h>
#include <stdlib.h>


int main(){
    char c1 ,c2;
    int CountLine=0;
    FILE *pfile = fopen("18_Maximum_Path_Sum.txt","r");
    if(pfile == NULL){
        printf("Failed to Open File\n");
        return 1;
    }
    do{
        do{
            c1 = c2;
            c2 = fgetc(pfile);
        }while(c1   c2 == ' ' );
        printf("%c",c1);
        printf("%c",c2);
        if(c2 == '\n') CountLine++;
    }while (c1 != EOF && c2 != EOF);

    return 0;
}