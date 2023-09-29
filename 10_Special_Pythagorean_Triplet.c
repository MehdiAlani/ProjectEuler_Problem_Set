#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 2000000
int main(){
    clock_t end , start;
    start=clock();
    double Time;
    long long int Sum=0;
    short int Prime;
    for(int number=2; number < MAX; number++ ){
        Prime=1;
        for(int i=2; i<=number/2 ;i++){
            if(number % i == 0){Prime = 0; break;}
        }
        if(Prime==1) {Sum=Sum+number; printf("%d\n",number);}
    }
    end=clock();
    printf("The final Sum of these Numbers are :%lld",Sum);
    printf("\n with time of %fs",(double)(end-start)/CLOCKS_PER_SEC);
    return 0;
}