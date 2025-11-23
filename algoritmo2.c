#include <stdio.h>
#include <stdbool.h>

// Ler um número maior que 0 e imprimir a soma de todos os números menores que o número lido.

void FlushBuffer(){
    int temp;

    while((temp = getchar()) != '\n' && temp != EOF);
}

int main(){

    while(true){

        // Leitura do número maior que zero pelo usuário
        int Number = 0;

        printf("Enter a Number Greater Than Zero: ");
        int TempCheckScan = scanf(" %d", &Number);

        // Validação de dados de entrada
        if (TempCheckScan == 0){
            printf("Invalid Entry! Characters Are Not Allowed! \n");
            FlushBuffer();
            continue;
        }

        // Validação de dados de entrada
        else if (Number < 0){
            printf("Invalid Entry! Numbers Less Than Zero Are Not Allowed! \n");
            FlushBuffer();
            continue;
        }

        // Soma dos números entre zero e o número lido pelo usuário
        int Sum = 0;
        for (int i = 0; i <= Number; i++){
            Sum = Sum + i;
        }

        printf("Numbers Sum: %d \n", Sum);

        break;
    }
}
