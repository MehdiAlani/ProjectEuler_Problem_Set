// https://projecteuler.net/problem=50 

#include <stdio.h>
#include <math.h>
#define MAX_NUMBER 1000


int Prime(int nb){
    for(int i = 2; i <= nb / 2; i++){
        if(nb % i == 0) return 0;
    }
    return 1;
}


int main(){
    int Sum , maxSum , max , count, Number;
    int j; 
    short int Valid; 
    max = 0;
    Number = 2;
    while (Number < MAX_NUMBER){
        Valid = Prime(Number);
        if(Valid){
            count = 0;
            j = 2;
            Sum = 0;
            while( Sum < Number ){
                if(Prime(j)){
                    Sum = Sum + j;
                    count = count + 1;
                }
                j++;
            }

            if(Sum == Number && count > max){
                max = count; 
                maxSum = Sum;
            }
        }
        Number++;
    }
        printf("The Largest Prime succence is %d with count %d\n",maxSum,max);
        return 0;
}
    
