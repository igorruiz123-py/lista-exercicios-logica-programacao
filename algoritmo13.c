#include <stdio.h>
#include <stdbool.h>

// Escreva um programa que determine se um número é primo.

void FlushBuffer(){
    int temp = 0;

    while((temp = getchar()) != '\n' && temp != EOF){};
}

void CalcPrimeNumber(int num){
    bool IsPrime = true;

    if (num == 1){
        printf("Number: '%d' is not prime! \n", num);
        return;
    }

    for (int i = 2; i < num; i++){
        if (num % i == 0){
            IsPrime = false;
            break;
        }
    }

    if (IsPrime){
        printf("Number: '%d' is  prime! \n", num);
    }
    else{
        printf("Number: '%d' is not prime! \n", num);
    }
}

int main(){

    while(true){

        int num = 0;

        printf("Enter a number: ");
        if (scanf("%d", &num) == 0 || num < 1){
            printf("Invalid entry! \n");
            FlushBuffer();
            continue;
        }

        CalcPrimeNumber(num);

        break;
    }
}