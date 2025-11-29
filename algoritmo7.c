#include <stdio.h>

// Escreva um programa em Portugol que apresente os primeiros n´umeros
// pares positivos menores ou iguais a 250

int main(){

    for (int i = 0; i <= 250; i++){
        if (i % 2 == 0){
            printf("Positive Number: %d \n", i);
        }
    }
}