#include <stdio.h>
#include <stdlib.h>
#include <gmp.h>
int ToNum(char nb){
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
    mpz_t LargeFact;
    long long int Sum = 0;
    int number=0 , size = 0;
    mpz_init(LargeFact);
    mpz_set_str(LargeFact,"1",10);
    printf("Please Give a number : ");
    scanf("%d",&number);
    for (int i = 2 ; i < number + 1; i++){
        mpz_mul_ui(LargeFact,LargeFact,i);
    }
    char *result_str = mpz_get_str(NULL, 10, LargeFact);
    for (int i = 0;result_str[i]!='\0';i++){
        Sum = Sum + ToNum(result_str[i]);
    }
    printf("%lld is the sum of %d!",Sum,number);
    mpz_clear(LargeFact);
    return 0;
}