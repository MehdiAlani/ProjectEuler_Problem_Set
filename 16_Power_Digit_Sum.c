#include <stdio.h> 
#include <math.h>
#include <stdlib.h>
#include <gmp.h>
#define MaxPower 1000
int num(char nb){
    switch(nb){
        case '0':
            return 0;
        case '1':
            return 1;
        case '2':
            return 2;
        case '3':
            return 3;
        case '4':
            return 4;
        case '5':
            return 5;
        case '6':
            return 6;
        case '7':
            return 7;
        case '8':
            return 8;
        case '9':
            return 9;
    }
}
int main(){
    int Sum = 0;
    mpz_t LargeNumber;
    mpz_init(LargeNumber);
    mpz_set_str(LargeNumber,"2",10);
    mpz_pow_ui(LargeNumber,LargeNumber,MaxPower);
    char *Result = mpz_get_str(NULL,10,LargeNumber);
    printf("%s",Result);
    for (int i = 0; Result[i]!='\0';i++){
        Sum=Sum+num(Result[i]);
    }
    printf("\nThe Sum of that number is %d",Sum);
    mpz_clear(LargeNumber);
    return 0;
}