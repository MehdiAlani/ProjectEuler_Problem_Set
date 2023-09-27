#include <stdio.h>
int main(){
    int SquareToSum=0;
    int SumToSquare=0;


    for(int i =1; i <=10;i++){
        SquareToSum=SquareToSum+i*i;
        SumToSquare=SumToSquare+i;
    }

    SumToSquare*=SumToSquare;
    printf("Diffrence between these Two is: %d",SumToSquare-SquareToSum);
}