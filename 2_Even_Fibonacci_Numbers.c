// https://projecteuler.net/problem=2


#define  MAXNUMBER 4000000
#include <stdio.h>
#include <stdlib.h>


int main(){
    int U0 = 1;
    int U1 = 2;
    long long int Sum = 2;
    while (U1 < MAXNUMBER){
        U1 = U1 + U0;
        if(!(U1%2)) Sum = Sum + U1;
        U0 = U1 - U0;
    }
    printf("The Simple Sum is : %lld\n",Sum);
    return 0;
}