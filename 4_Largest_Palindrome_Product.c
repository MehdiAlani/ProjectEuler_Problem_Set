// https://projecteuler.net/problem=4

#include <stdio.h>
#include <stdlib.h>

#define MAX_Digit_Product 3

long long int power(long long int a, int n){
    long long int pow = 1;
    int i;
    for(i = 0; i < n; i++) pow = pow * a;
    return pow;
}
int palandriom(long long int a){
    long long int temp = a;
    long long int b = 0;
    while (temp != 0){
        b = b * 10 + temp % 10;
        temp = temp / 10;
    }
    return a == b;
}
int main(){
    int i , j ;
    long long int maxNumber = 0; 
    for(i = power(10,MAX_Digit_Product - 1); i < power(10,MAX_Digit_Product); i++){
        for(j = power(10,MAX_Digit_Product - 1); j < power(10,MAX_Digit_Product); j++){
            if(palandriom(i*j) && i*j > maxNumber){
                maxNumber = i * j;
            }
        }
    }
    printf("The maxNumber is => %lld\n",maxNumber);
    return 0;
}
