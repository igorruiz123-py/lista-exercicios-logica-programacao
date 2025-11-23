#include <stdio.h>
#include <stdbool.h>

// Ler dois números maiores que 0 e imprimir todos os números entre eles. Suponha que o segundo número é maior que o primeiro.

void FlushBuffer(){
    int temp;

    while((temp = getchar()) != '\n' && temp != EOF);
}

int main(){

    while(true){

        // Entrada de dados do usuário
        int Number1 = 0;
        int Number2 = 0;

        printf("Enter a Number: ");
        int TempCheckScan1 = scanf(" %d", &Number1);

        printf("\n");

        printf("Enter Another Number: ");
        int TempCheckScan2 = scanf(" %d", &Number2);

        printf("\n");

        // Validação de dados
        if (TempCheckScan1 == 0 || TempCheckScan2 == 0){
            printf("Invalid Entry! Characters Are Not Allowed! \n");
            FlushBuffer();
            continue;
        }

        else if (Number1 < 0 || Number2 < 0){
            printf("Invalid Entry! Number Less Than Zero Are Not Allowed \n");
            FlushBuffer();
            continue;
        }

        else if (Number1 > Number2){
            printf("Invalid Entry! Number 2 Must Be Greater Than Number 1 \n");
            FlushBuffer();
            continue;
        }

        // Display dos números entre número 1 e número 2

        for (int i = Number1; i <= Number2; i++){
            printf("Number: %d \n", i);
        }

        break;

    }
}
