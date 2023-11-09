// https://projecteuler.net/problem=26

#include <stdio.h>
#define MAX_D 1000
int main(){
    double d = 11;
    while (d < 1000){
        printf("1 /(%f) = %f\n",d,1/d);
        d++;
    }
    return 0;
}