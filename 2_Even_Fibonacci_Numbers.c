#include <stdio.h>

int main(){
    int temp;
    int FirstNumber = 1;
    int SecondNumber = 2;
    int Sum=0;
    while (SecondNumber<4000000){
        if(SecondNumber%2==0)Sum=Sum+SecondNumber;
        temp=SecondNumber;
        SecondNumber = SecondNumber + FirstNumber;
        FirstNumber=temp;
    }
    printf("The Simple Sum is :%d",Sum);
    return 0;
}