// https://projecteuler.net/problem=5

#include <stdio.h>
#define MaxNumber 20

int Divisible_Range(long long int number ,int n){
    int i; 
    for(i = 1 ; i <= n ; i++){
        if(number % i) return 0;
    }
    return 1;
}
int main(){
    long long int Secret_Number = 1;
    while(!Divisible_Range(Secret_Number,MaxNumber)) Secret_Number++;
    printf("The Secret Number is => %lld\n",Secret_Number);
    return 0;
}

















/*
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
*/