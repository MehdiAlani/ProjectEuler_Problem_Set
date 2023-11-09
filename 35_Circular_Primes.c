// https://projecteuler.net/problem=35


#include <stdio.h>
#include <string.h>
#define MAX_NUmber 1000000
int main(){
    int Number = 100 , temp;
    int CountcPrime = 13;
    short int CPrime = 0;
    int ListNb[7] , SizeofInt , aux , count;
    memset(ListNb,-1,7);
    while(Number < MAX_NUmber){
        temp = Number;
        SizeofInt = 0;
        CPrime = 1;
        while(temp != 0){
            ListNb[SizeofInt] = temp % 10;
            temp = temp / 10;
            SizeofInt++;
        }
        for(int i = 0; i < SizeofInt / 2; i++){
            aux = ListNb[i];
            ListNb[i] = ListNb[SizeofInt-1-i];
            ListNb[SizeofInt-1-i] = aux;
        }
        count = 0;
        while(CPrime && count < SizeofInt){
            aux = ListNb[0];
            for(int i = 0; i < SizeofInt - 1; i++){
                ListNb[i] = ListNb[i+1];
            }
            ListNb[SizeofInt - 1] = aux;
            temp = 0;
            for(int i = 0; i < SizeofInt; i++){
                temp = temp * 10 + ListNb[i];
            }
            for(int i = 2; i < temp / 2 ; i++){
                if(temp % i == 0) {
                    CPrime = 0;
                    break;
                }
            }
            count++;
        }
        if (CPrime){
            CountcPrime++;
            printf("This number is a circular prime: %d\n",Number);    
        }
        Number++;
    }
    printf("There are %d Circular Prime Numbers below %d\n",CountcPrime,MAX_NUmber);
}