#include <stdio.h>

// Escreva um programa que calcule e apresente a soma entre os primeiros
// 100 inteiros positivos.

int main(){

    int sum = 0;

    for (int i = 0; i <= 100; i++){
        sum = sum + i;
        printf("Number: %d \n", i);
    }

    printf("\n");

    printf("Sum: %d \n", sum);
}