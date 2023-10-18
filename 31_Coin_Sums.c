// https://projecteuler.net/problem=31


#include <stdio.h>


int main(){
    long long int Combinations = 7;
    int p1=0 , p2=0 , p5=0 , p10=0 , p20=0 , p50=0, P=0;
    float Sum = 0;
    while(P*1 < 2){
        while( p50 * 50/200.0 < 2){
            while( p20 * 20/200.0 < 2){
                while( p10 * 10/200.0 < 2){
                    while( p5 * 5/200.0 < 2){
                        while( p2 * 2 / 200.0 < 2){
                            while( p1 * 1/200.0 < 2 && Sum < 2){
                                Sum = P * 1 + p50 * 50/200.0 + p20 * 20/200.0 + p10 * 10/200.0;
                                Sum = Sum + p5 * 5/200.0 + p2 * 2 / 200.0 + p1 * 1/200.0;
                                //printf("Sum=%f    %d %d %d %d %d %d %d \n",Sum,p1,p2,p5,p10,p20,p50,P);
                                if(Sum == 2) {
                                    Combinations++;
                                    printf("%d    %d %d %d %d %d %d %d \n",Combinations,p1,p2,p5,p10,p20,p50,P);
                                }
                                p1++;
                            }
                            Sum = 0;
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
    printf("%d",Combinations);
}

