#include <stdio.h>
#include <stdlib.h>
#define MAXTERM 1000000
int main(){
    long long int Number=0;
    long long int MaxNumber=0;
    int CountSequence=0;
    int MaxSequence = 0; 
    for(long long int i = 2 ; i < MAXTERM ; i++){
        Number=i;
        CountSequence=0;
        //printf("%lld\n",i);
        while(Number!=1){
            CountSequence++;
            if(Number % 2 == 0){
                Number = Number / 2;
            }
            else {
                Number = 3 * Number + 1;
            }
        }
        if(CountSequence > MaxSequence){
            MaxNumber=i;
            MaxSequence=CountSequence;
            printf("The max Now is %lld with Sequence Count %d\n",i,CountSequence);
        }
    }
    printf("The Max Number is %lld with Sequence Count %d\n",MaxNumber,MaxSequence);
    return 0;
}