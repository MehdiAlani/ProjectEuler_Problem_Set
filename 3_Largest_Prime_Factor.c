/// Our Number 600851475143
#include <stdio.h>
int main(){
    long long int number=578437589347;
    long long int max=2;
    short int prime=0;

    printf("Please Give a number \n:");
    scanf("%lld",&number);

    for (long long int i=2; i<number/2;i++){
        if (number%i!=0){
            continue;
        }
        else{
            prime=1;
            for (int j = 2;j<i/2;j++){
                if(i%j==0){
                    prime=0;
                    break;
                }
            }
            if (prime) {max=i; printf("%lld\n",max);
        }
    }
    return 0;
}









/*
#include <stdio.h>
int main(){
    short prime;
    long long int number;
    printf("Please Give a number: ");
    scanf("%lld",&number);
    printf("\n");
    for (long long int i = number/2 ;i>1;i--){
        if(number%i==0){
            prime=1;
            for(long long int j = 2; j<=i/2 ;j++){
            if(i % j == 0) {
                prime = 0;
                break;
            }
            }
            if (prime == 1){
                printf("this is the last number :%lld",i);
                return 0;
            }
        }
        printf("%lld\n",i);
    }
    return 1;
}
*/