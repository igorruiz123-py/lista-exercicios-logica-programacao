#include <stdio.h>
#include <stdbool.h>

// Dada uma seqüência de números inteiros não-nulos, seguida por 0, imprimir seus quadrados.

void FlushBuffer(){
    int temp = 0;

    while((temp = getchar()) != '\n' && temp != EOF){};
}

int CheckData(int *num){
    
    printf("Enter a number: ");
    if (scanf(" %d", num) == 0){
        printf("\n");
        FlushBuffer();
        return 0;
    }

    printf("\n");

    return 1;
}

void CalcSquareNum(int num){

    int square = 1;
    for (int i = square; i <= num; i++){
        square = i * i;
        printf("Number: %d \n", square);
    }
}

int main(){

    while(true){

        int num = 0;

        if (CheckData(&num)){
            CalcSquareNum(num);
            break;
        }
        else {
            printf("Invalid number! \n");
            printf("\n");
            continue;
        }
    }
}