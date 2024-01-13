// https://projecteuler.net/problem=3


#define NUMBER_VERIFY 600851475143 
#include <stdio.h>

int Prime(long long int nb){
    long long int i = 2;
    while(i < nb / 2 && (nb % i)) i++;
    return (i == nb / 2 && nb != 4);
}

int main(){
    long long int number = NUMBER_VERIFY;
    long long int i = 2;

    while(i < NUMBER_VERIFY / 2 && number > 1){
        i++;
        while(Prime(i) && !(number % i))
            number = number / i;
    }

    printf("The Largest Number is %lld\n",i);
    return 0;
}