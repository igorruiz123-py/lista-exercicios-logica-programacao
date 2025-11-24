#include <stdio.h>
#include <stdbool.h>

// Ler dois números maiores que 0 e imprimir a soma de todos os números entre eles. Suponha que o segundo número é maior que o primeiro.

void FlushBuffer(){
    int temp;

    while((temp = getchar()) != '\n' && temp != EOF);
}

int main(){

    while(true){

        int Number1 = 0;
        int Number2 = 0;

        printf("Enter a Number: ");
        int TempCheckScan1 = scanf("%d", &Number1);

        printf("Enter Another Number: ");
        int TempCheckScan2 = scanf("%d", &Number2);

        printf("\n");

        if (TempCheckScan1 == 0 || TempCheckScan2 == 0){
            printf("Characters Are Not Allowed! \n");
            FlushBuffer();
            continue;
        }

        else if (Number1 < 0 || Number2 < 0){
            printf("Numbers Less Than Zero Are Not Allowed! \n");
            FlushBuffer();
            continue;
        }

        else if (Number1 > Number2){
            printf("Number 2 Must Be Greater Than Number 1! \n");
            FlushBuffer();
            continue;
        }

        else{
            int Sum = 0;
            for (int i = Number1; i <= Number2; i++){
                Sum = Sum + i;
                printf("Number: %d \n", i);
            }

            printf("\n");
            printf("Sum Between Numbers 1 and Numbers 2: %d \n", Sum);
        }

        break;
    }
}