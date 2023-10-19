// https://projecteuler.net/problem=27

#include <stdio.h>
#include <math.h>
int main(){
    int a,n=0,b,MaxNb=0;
    long int Maxproduct = 1;
    long long int number;
    int Prime = 0;
    for(a = - 999; a < 1000; a++){
       for(b = - 999; b < 1000; b++){
            n = -1;
            do{
                Prime = 1;
                n++;
                number = n * n  + n * a + b;
                for(int i = 2; i < round(sqrt(number)) ;i++){
                    if(number % i == 0) {
                        Prime = 0;
                        break;
                    }
                }
            }while(Prime == 1);
            if(MaxNb < n) {
                MaxNb = n ;
                Maxproduct = a * b;
                printf("Max is now for %d(2) + %d * %d + %d => has %d primes \n",MaxNb,a,MaxNb,b,MaxNb);
            } 
        }

    }
    printf("The largest product is %ld with numbrr of primes %d\n",Maxproduct,MaxNb);



}