#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/*
Fazer uma rotina que recebe um string como parâmetro e imprime quantas
palavras (separadas por espaços em branco) o mesmo contém.
*/

int CheckData(char *arr, int len){

    printf("Enter a phrase: ");
    fgets(arr, len, stdin);
    arr[strcspn(arr, "\n")] = '\0';

    int ArrNum[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int ArrLen = sizeof(ArrNum) / sizeof(ArrNum[0]);

    for (int i = 0; i < len && arr[i] != '\0'; i++){
        for (int j = 0; j < ArrLen && ArrNum[j] != '\0'; j++){
            if (arr[i] == ArrNum[j]){
                return 0;
            }
        }
    }

    return 1;
}

void DisplayTask(char *arr, int len){

    char space = ' ';
    bool SpaceFound = false;
    int counter = 0;

    for (int i = 0; i < len && arr[i] != '\0'; i++){
        if (arr[i] == space){
            SpaceFound = true;
            counter++;
        }
    }

    if (SpaceFound){
        printf("The number of spaces in your phrase is %d \n", counter);
    }
    else {
        printf("There is no space in your phrase \n");
    }
}

int main(){

    while(true){

        char arr[20];
        int len = sizeof(arr) / sizeof(arr[0]);

        if (CheckData(arr, len)){
            DisplayTask(arr, len);
            break;
        }
        else {
            printf("Invalid entry! \n");
            continue;
        }

    }
}