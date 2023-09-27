#include <stdio.h>
#include <math.h>
int main(){
    int NumberofPrimes=0;
    long long int number=1; 
    short int Prime=0;
    while (NumberofPrimes!=10001){
    Prime=1;
        for (long long int i=2; i<=round(sqrt(number));i++){
            if(number % i == 0){
                Prime=0;
                break;
            }
        }
        if(Prime == 1){
            NumberofPrimes++;
            printf("%lld ==> Prime N°%d\n",number,NumberofPrimes);
        }
    number++;
    }
    return 0;
}