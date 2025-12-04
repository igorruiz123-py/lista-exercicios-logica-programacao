#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/*
Escreva um programa para gerar o invertido de um número com três algarismos
(exemplo: o invertido de 498 é 894).
*/


int CheckData(char *arr, int len){

    printf("Enter a number: ");
    fgets(arr, len, stdin);
    arr[strcspn(arr, "\n")] = '\0';

    for (int i = 0; arr[i] != '\0'; i++){
        if (arr[i] < '0' || arr[i] > '9'){
            return 0;
        }
    }

    if (strlen(arr) != 3){
        return 0;
    }

    return 1;
}

void InverteNumber(char *arr){

    int temp = 0;

    temp = arr[0];
    arr[0] = arr[2];
    arr[2] = temp;

    printf("inverted number: %s \n", arr);
}

int main(){

    while(true){

        char arr[4];

        if (CheckData(arr, sizeof(arr))){
            InverteNumber(arr);
            break;
        }

        else {
            printf("invalid entry! \n");
            continue;
        }

    }
}
