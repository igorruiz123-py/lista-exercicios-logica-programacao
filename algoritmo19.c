#include <stdio.h>
#include <stdbool.h>

// Dado um número inteiro positivo n, imprimir os n primeiros naturais ímpares.
// Exemplo: Para n=4 a saída deverá ser 1,3,5,7.

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

void DisplayOddNum(int num){

    int counter = 1;

    for (int i = 0; i < num; i++){
        printf("Odd number: %d \n", counter);
        counter += 2;
    }
}

int main(){

    while(true){

        int num = 0;

        if (CheckData(&num)){
            DisplayOddNum(num);
            break;
        }
        else {
            printf("Invalid entry! \n");
            continue;
        }
    }
}