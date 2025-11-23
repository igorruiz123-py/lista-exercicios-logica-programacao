#include <stdio.h>
#include <stdbool.h>

// Ler um número maior que zero e imprimir o quadrado de todos os números entre 0 e o número lido. 

void FlushBuffer(){
    int temp;

    while((temp = getchar()) != '\n' && temp != EOF);
}

void NewLine(){
    printf("\n");
}

int main(){

    while(true){

        // Leitura do número maior que zero pelo usuário
        int Number = 0;

        printf("Enter a Number Greater Than Zero: ");
        int TempCheckScan = scanf(" %d", &Number);

        NewLine();

        // Validação de entrada
        if (TempCheckScan == 0){
            printf("Invalid Entry! Characters Are Not Allowed! \n");
            FlushBuffer();
            continue;
        }

        // Validação de entrada
        else if (Number < 0){
            printf("Invalid Entry! Numbers Less Than Zero Are Not Allowed! \n");
            FlushBuffer();
            continue;
        }

        // Quadrados dos números entre 0 e o número lido
        int Num = 0;
        for (int i = 0; i < Number; i++){
            Num = Number - i;
            printf("Number: %d \n", Num * Num);
        }

        break;
    }
}
