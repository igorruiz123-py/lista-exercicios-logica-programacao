#include <stdio.h>
#include <stdbool.h>

// Apresente os múltiplos de 7 contidos no intervalo de 50 a 100. Conte também quantos existem

int main(){

    int counter = 0;
    for (int i = 50; i <= 100; i++){
        if (i % 7 == 0){
            counter++;
            printf("Number: '%d' is divisible by 7! \n", i);
        }
    }   

    printf("\n");

    printf("Total of numbers disible by 7: %d \n", counter);
    
}