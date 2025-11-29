#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Escreva um programa que leia dois inteiros a e b e apresente os números primos entre eles.

void FlushBuffer(){
    int temp = 0;

    while((temp = getchar()) != '\n' && temp != EOF){};
}

int IsPrime(int num){
    if (num <= 1){
        return 0;
    }

    for (int i = 2; i <= sqrt(num); i++){
        if (num % i == 0)
            return 0;
    }

    return 1;
}

void DisplayPrimeNumbers(int a, int b){
    for (int i = a; i <= b; i++){
        if (IsPrime(i)){
            printf("Prime Number: %d \n", i);
        }
    }
}

int main(){

    while(true){

        int a = 0;
        int b = 0;

        printf("Enter Number A: ");
        if (scanf("%d", &a) == 0) {printf("Invalid Entry! \n"); FlushBuffer(); continue;}

        printf("\n");

        printf("Enter Number B: ");
        if (scanf("%d", &b) == 0) {printf("Invalid Entry! \n"); FlushBuffer(); continue;}

        printf("\n");

        DisplayPrimeNumbers(a, b);

        break;
    }
}
