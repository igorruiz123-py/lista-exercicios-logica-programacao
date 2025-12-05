#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/*
Fazer um programa em "C" que solicita um número inteiro e soletra o mesmo
na tela.
Ex:
124: um, dois, quatro
*/

int CheckData(char *arr, int len){

    // Entrada de dados pelo usuário
    printf("Enter a number: ");
    fgets(arr, len, stdin);
    arr[strcspn(arr, "\n")] = '\0';

    // Verificação para o usuário digitar apenas digitos
    for (int i = 0; i < len && arr[i] != '\0'; i++){
        if (arr[i] < '0' || arr[i] > '9'){
            return 0;
        }
    }

    return 1;
}

void DisplayTask(char *arr, int len){

    // Vetores com os números em digito e por extenso, junto com seus respectivos tamanhos
    const char *ArrChars[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    char ArrNums[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int ArrNumsLen = sizeof(ArrNums) / sizeof(ArrNums[0]);
    // Variável para dar match nos indices dos vetores de números
    int index = -1;

    for (int i = 0; i < len && arr[i] != '\0'; i++){
        for (int j = 0; j < ArrNumsLen; j++){
            if (arr[i] == ArrNums[j]){
                index = j;
                printf("%s \n", ArrChars[index]);
            }
        }
    }
}

int main(){

    while(true){

        char UserNum[20];
        int UserNumLen = sizeof(UserNum) / sizeof(UserNum[0]);

        if (CheckData(UserNum, UserNumLen)){
            DisplayTask(UserNum, UserNumLen);
            break;
        }
        else {
            printf("Invalid entry! \n");
            continue;
        }
    }
}