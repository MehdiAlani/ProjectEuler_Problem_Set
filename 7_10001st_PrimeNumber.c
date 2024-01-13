// https://projecteuler.net/problem=7

#include <stdio.h>
#define Number_Search 10001
int main(){
    int CountPrimes = 2;
    long long int number = 4;
    long long int i;
    while(CountPrimes != Number_Search){
        number++;
        i = 2;
        while(i < number / 2 && (number % i)) i++;
        if ( i == number / 2 ) {
            CountPrimes++;
        }
    }
    printf("%lld\n",number);
    return 0;
}