// https://projecteuler.net/problem=21

#include <stdio.h>
#define Max_Number 10000
int main(){ 
    long long int TempSum = 0 , FinalSum=0;
    unsigned int Number = 1 , dNumber;

    while(Number < Max_Number){
        TempSum = 0;
        for(int i = 1; i <= Number / 2 ; i++){
            if(Number % i==0) TempSum = TempSum + i;
        }
        dNumber = TempSum;
        if(dNumber != Number){
            TempSum = 0;
            for(int i = 1; i <= dNumber / 2 ; i++){
                if(dNumber % i==0) TempSum = TempSum + i;
            }
            if(TempSum == Number) {
                FinalSum = FinalSum + (int)((dNumber + Number)/2.0);
            }
        }
        Number++;
    }
    printf("The Sum is %lld\n",FinalSum);

    return 0;
}