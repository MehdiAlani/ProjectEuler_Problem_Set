// https://projecteuler.net/problem=34

#include <stdio.h>
#define MAX_NUMBER 9999999999

int main(){
    long long int LargeSum = 0 , Sum = 0 ;
    long long int Number  = 3,temp ;
    int FactDigit = 0;
    while(Number < MAX_NUMBER){
        temp = Number;
        Sum = 0;
        while(temp != 0){
            FactDigit = 1; 
            for(int i = 2; i <= (temp % 10); i++){
                FactDigit = FactDigit * i;
            }
            temp = temp / 10;
            Sum = Sum + FactDigit;
        }
        if(Number == Sum){
            printf("Found New Number %lld\n",Number);
            LargeSum = LargeSum + Number;
        }
        Number++;
    }
    printf("The Final Sum is %lld\n",LargeSum);
}