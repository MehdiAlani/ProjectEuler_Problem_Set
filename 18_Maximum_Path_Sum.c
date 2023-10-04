#include <stdio.h>
#include <stdlib.h>


int main(){
    char c;
    char Line[100];
    FILE *pfile = fopen("18_Maximum_Path_Sum.txt","r");
    int Msg[15][15];
    short int Rows = 0 , Columes = 0;
    char Line[100];
    while(fgets(Line,sizeof(Line),pfile) != NULL){
        for(int i = 0; Line[i]!='\0'; i=i+2){
            if(Line[i]<='9'){

            }
        }
        Columes++;
    }

    return 0;
}