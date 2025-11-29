#include <stdio.h>
#include <stdbool.h>

// Escreva um programa que calcule a soma entre os inteiros pares contidos
// no intervalo [a, b], com a e b dados pelo usu´ario.

void FlushBuffer(){
    int temp = 0;

    while((temp = getchar()) != '\n' && temp != EOF){};
}

int main(){

    while(true){
        
        int num1, num2, sum= 0;

        printf("Enter Number 1: ");
        if (scanf(" %d", &num1) == 0) {printf("Invalid Entry! \n"); FlushBuffer(); continue;}

        printf("\n");

        printf("Enter Number 2: ");
        if (scanf(" %d", &num2) == 0) {printf("Invalid Entry! \n"); FlushBuffer(); continue;}

        printf("\n");

        if (num1 > num2){
            printf("Number 2 must be greater than number 1 \n");
            FlushBuffer();
            continue;
        }

        for (int i = num1; i <= num2; i++){
            sum = sum + i;
            printf("Number: %d \n", i);
        }

        printf("\n");

        printf("Sum: %d", sum);

        break;
    }
}