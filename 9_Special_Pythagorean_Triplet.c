#include <stdio.h>
#include <math.h>
int main(){
    int a = 0;
    int b = 0;
    float c = 0;
    while (a<500){
        b=a;
        while (b<400){
            b++;
            c=sqrt(pow(a,2) + pow(b,2));
            printf("b=%d\n",b);
            if( a+b+c == 1000 && a<b && b<c && c==floor(c)) {
                printf("a=%d b=%d c=%.0f\n",a,b,c);
                printf("the product abc = %.0f\n",a*b*c);
                return 0;
            }
        }
        a++;
        printf("a=%d\n",a);
    }
    return 1;
}