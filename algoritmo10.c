#include <stdio.h>
#include <stdbool.h>

// Escreva um programa que apresente os n primeiros termos da sequˆencia
// de Fibonacci, sendo n ≥ 2.

void FlushBuffer(){
    int temp = 0;

    while((temp = getchar()) != '\n' && temp != EOF){};
}

void CalcFiboncci(int n){
    int a = 0;
    int b = 1;
    int x = 0;

    for (int i = 0; i < n; i++){
        x = a + b;
        a = b;
        b = x;

        printf("Number: %d \n", x);
    }
}

int main(){

    while(true){

        int Num = 0;

        printf("Enter a number: ");
        if (scanf(" %d", &Num) == 0 || Num <= 2) {printf("Invalid entry! \n"); FlushBuffer(); continue;}

        printf("\n");

        CalcFiboncci(Num);

        break;
    }
}