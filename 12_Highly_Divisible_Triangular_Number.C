#include <stdio.h>
#include <stdlib.h>
// this is the number btw (76576500) 12375th with dividors 576
int main(){
    long int Secret_Number = 0;
    int Trinagle_Number = 1;
    int NumberOfDivider = 2;
    while (NumberOfDivider<500){
        NumberOfDivider=2;
        Secret_Number=Secret_Number+Trinagle_Number;
        for (int i = 2; i <= Secret_Number/2;i++){
            if(Secret_Number % i == 0){
                NumberOfDivider++;
            }
        }
        printf("%dth: %ld with dividors %d\n",Trinagle_Number,Secret_Number,NumberOfDivider);
        Trinagle_Number++;
    }
    printf("the number is :%ld\n",Secret_Number);

    return 0;
}