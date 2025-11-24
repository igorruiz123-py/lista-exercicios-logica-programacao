#include <stdio.h>
#include <stdbool.h>

// Leia 5 idades e calcule e imprima a média entre as idades.

void FlushBuffer(){
    int temp;

    while((temp = getchar()) != '\n' && temp != EOF);
}

int main(){

    while(true){

        // Entrada de dados do usuário
        int Age = 0;
        int Sum = 0;
        float Mean = 0;
        bool CharFound = false;
        bool NegativeNumFound = false;
        
        for (int i = 1; i <= 5; i++){
            printf("Enter Age Number: ");
            int TempCheckScan = scanf(" %d", &Age);

            if (TempCheckScan == 0){
                CharFound = true;
                FlushBuffer();
            }

            else if (Age < 0){
                NegativeNumFound = true;
                FlushBuffer();
            }

            else{
                Sum = Sum + Age;
                Mean = Sum / 6;
            }
        }

        printf("\n");

        if (CharFound){
            printf("Invalid Entry! Characters Are Not Allowed! \n");
            CharFound = false;
            continue;
        }

        else if (NegativeNumFound){
            printf("Invalid Entry! Numbers Less Than 0 Are Not Allowed! \n");
            NegativeNumFound = false;
            continue;
        }

        printf("Ages Mean: %.2f \n", Mean);

        break;

    }
}