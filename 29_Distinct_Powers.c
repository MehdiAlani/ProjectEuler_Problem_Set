// https://projecteuler.net/problem=29

#include <stdio.h>

#define MaxHighNumber 99999999

int main(){
    long long int Number = 2 , temp;
    long long int LargeSum = 0 ;
    long long int Sum = 0;
    while (Number < MaxHighNumber){
        temp = Number;
        Sum = 0;
        while (temp !=0){
            Sum = Sum + (temp % 10) * (temp % 10) * (temp % 10) * (temp % 10) * (temp % 10);
            temp = temp / 10;
        }
        if(Sum == Number){
            LargeSum =  LargeSum + Number;
            printf("Number %lld with the Sum now => %lld\n",Number,LargeSum);
        }
        Number++;
    }
    printf("%lld\n",LargeSum);
    return 0;
}