// https://projecteuler.net/problem=31


#include <stdio.h>

int main(){
    long long int Combinations = 7;
    int p1=0 , p2=0 , p5=0 , p10=0 , p20=0 , p50=0, P=0;
    int Sum = 0;
    while(P*1 < 2){
        while(p50 < 4){
            while( p20 < 10){
                while( p10 < 20){
                    while(p5 < 40){
                        while(p2  <  100){
                            while(p1 < 200){
                                Sum = P * 100 + p50 * 50 +  p20 * 20 + p10 * 10 + p5 * 5 +  p2 * 2 + p1;
                                if(Sum == 200) {
                                    Combinations++;
                                    printf("%lld   p1:%d p2:%d p5:%d p10:%d p20:%d p50:%d P:%d \n",Combinations,p1,p2,p5,p10,p20,p50,P);
                                    break;
                                }
                                p1++;
                            }
                            p1 = 0;
                            p2++;
                        }
                        p2=0;
                        p5++;
                    }  
                    p5=0;
                    p10++;
                }
                p10=0;
                p20++;
            }
            p20=0;
            p50++;
        }
        p50=0;
        P++;
    }
    Combinations++;
    printf("The Final Number of Posibilties are %d",Combinations);
}

