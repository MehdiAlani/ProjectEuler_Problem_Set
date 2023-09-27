#include <stdio.h>
#include <windows.h>
int main(){
    short int Found=0;
    int SmallestNumber=0;
    while (!Found){
        Found=1;
        SmallestNumber++;
        for (int i =1;i<=20; i++){
            if(SmallestNumber % i !=0){
                Found=0;
                break;
            }
        }
        printf("Not this : %d\n",SmallestNumber);
    }
    Beep(9000,800);
    printf("\n\nFound Number : %d",SmallestNumber);
}