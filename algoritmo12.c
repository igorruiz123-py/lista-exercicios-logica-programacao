#include <stdio.h>
#include <stdbool.h>

// Escreva um programa que calcule o número de divisores positivos de um número

void FlushBuffer(){
    int temp = 0;

    while((temp = getchar()) != '\n' && temp != EOF){};
}

void CalcDividerNum(int num){
    int counter = 0;

    for (int i = 1; i <= num; i++){
        if (num % i == 0){
            counter++;
            printf("Number of dividers by '%d': %d \n", num, i);
        }
    }

    printf("\n");

    printf("Total of dividers: %d \n", counter);
}

int main(){

    while(true){

        int num = 0;

        printf("Enter a number: ");
        if (scanf("%d", &num) == 0){
            printf("Invalid entry! \n");
            FlushBuffer();
            continue;
        }
        else if (num <= 0){
            printf("Invalid entry! \n");
            FlushBuffer();
            continue;
        }

        CalcDividerNum(num);

        break;

    }
}