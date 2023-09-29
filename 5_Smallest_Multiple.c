#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
    short int Found=0;
    long long int SmallestNumber=0;
    clock_t start,end;
    double time;
    FILE *Pfile = fopen("TestLog.txt","w");
    start = clock();
    while (!Found){
        Found=1;
        SmallestNumber++;
        for (int i =1;i<=20; i++){
            if(SmallestNumber % i !=0){
                Found=0;
                break;
            }
        }
        end = clock();
        time=(end-start)/CLOCKS_PER_SEC; 
        fprintf(Pfile,"Time Passed:%lfs",time);
        fflush(Pfile);
        fclose(Pfile);
        Pfile = fopen("TestLog.txt","w");
    }
    fprintf(Pfile,"Found Number : %lld   on time: %lfs",SmallestNumber,time);

}