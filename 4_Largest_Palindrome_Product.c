#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>
#define Max(X,Y) X>Y ? X : Y
int main(){
    int max=0;
    short digits;
    int product;
    for(int n2=99; n2<1000; n2++){
        for(int n1=91; n1<1000; n1++){        
            product = n1 * n2;
            digits=floor(log10(product));
            short int j,i;
            switch(digits){
                case 3:
                    if((product / (int)pow(10,digits) == product % 10) && (product / 100) % 10  == (product / 10) % 10 ){
                        max=Max(product,max);
                    }
                    break;
                case 4:
                    if((product / (int)pow(10,digits) == product % 10) && (product / 100) % 10  == (product / 10) % 10 ){
                        max=Max(product,max);
                    }
                    break;
                case 5:
                    if((product / (int)pow(10,digits) == product % 10) && (product / 10000) % 10 == (product / 10) % 10 && (product / 1000) % 10 == (product / 100) % 10){
                        max=Max(product,max);
                    }
                    break;
            }
        }
    }
    printf("The number is finally:\n%d",max);
    system("pause");
    return 0;
}