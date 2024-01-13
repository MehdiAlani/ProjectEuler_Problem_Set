// https://projecteuler.net/problem=6

#define MAXNUMBER 100  
#include <stdio.h>
int main(){
    long int SquareToSum=0;
    long int SumToSquare=0;
    int i;
    for(i =1; i <= MAXNUMBER ;i++){
        SquareToSum=SquareToSum+i*i;
        SumToSquare=SumToSquare+i;
    }
    SumToSquare*=SumToSquare;
    printf("Diffrence between these Two is: %d\n",SumToSquare-SquareToSum);
}