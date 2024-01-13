// https://projecteuler.net/problem=1

#include <stdio.h>
#include <stdlib.h>

#define MAXNUMBER 1000

int main(){
    int Sum=0;
    int i;
    for (i = 3; i < MAXNUMBER; i++)
        if (!(i%5) || !(i%3))
           Sum = Sum + i;
    printf("The Sum = %d\n",Sum);
    return 0;
}