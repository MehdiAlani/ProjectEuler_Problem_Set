// https://projecteuler.net/problem=28

#include <stdio.h>
#include <stdlib.h>
#define GRID_LENGTH 1001

int main(){
    int** Grid = (int**)malloc(GRID_LENGTH * sizeof(int*));

    for (int i = 0; i < GRID_LENGTH; i++) 
        Grid[i] = (int*)malloc(GRID_LENGTH * sizeof(int));
    
    int NumberofSteps = 1;
    short int Shifter;
    int Counter = 1 ;
    long long int Sum = 0;
    int X = GRID_LENGTH / 2 ;
    int Y = GRID_LENGTH / 2 ;
    Grid[X][Y] = 1;
    while(X != 0 && Y != 0){
        if (!(NumberofSteps % 2)) Shifter = -1;
        else Shifter = 1;
        for(int i = 0; i < NumberofSteps ; i++){
            X = X + Shifter;
            Counter++;
            Grid[Y][X] = Counter;
        }
        for(int i = 0; i < NumberofSteps ; i++){
            Y = Y + Shifter;
            Counter++;
            Grid[Y][X] = Counter;
        }
        NumberofSteps++;
    }
    for(int i = 1; i < GRID_LENGTH ; i++){
        Counter++;
        Grid[0][i]=Counter;
    }
    for(int i = 0; i < GRID_LENGTH; i++){
        for(int j = 0; j < GRID_LENGTH; j++){
            if(i==j || i == (GRID_LENGTH - 1 - j)) Sum = Sum + Grid[i][j];  
        }
    }
    printf("With Sum of %d\n",Sum);
    
}