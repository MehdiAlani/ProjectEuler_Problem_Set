#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(){
    int Sum=0;
    for (int i = 3; i<1000; i++){
        if (i%5==0 || i%3 == 0){
           Sum=Sum+i;
        }
    }
    printf("%d",Sum);
    system("pause");
    return 0;
}