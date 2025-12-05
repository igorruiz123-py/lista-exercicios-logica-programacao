#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/*
Fazer um programa em "C" que lê um string contendo palavras separadas por
um espaço em branco cada e as imprime uma abaixo das outras.
*/

int CheckData(char *arr, int len){

    // Entrada de dados do usuário
    printf("Enter phrase with space: ");
    fgets(arr, len, stdin);
    arr[strcspn(arr, "\n")] = '\0';


    char nums[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int NumLen = sizeof(nums) / sizeof(nums[0]);

    // Verificação de entrada prevenindo o usuário de inserir digitos
    for (int i = 0; i < len && arr[i] != '\0'; i++){
        for (int j = 0; j < NumLen && nums[j] != '\0'; j++){
            if (arr[i] == nums[j]){
                return 0;
            }
        }
    }

    return 1;
}

void DisplayTask(char *arr, int len) {

    for (int i = 0; i < len && arr[i] != '\0'; i++) {

        // Ignora espaços
        if (arr[i] == ' ')
            continue;

        // Início de uma palavra
        // Imprime até encontrar espaço ou final da string
        for (int j = i; j < len && arr[j] != ' ' && arr[j] != '\0'; j++) {
            putchar(arr[j]);

            // Se achar o fim da palavra, atualiza i
            if (arr[j + 1] == ' ' || arr[j + 1] == '\0') {
                putchar('\n');
                i = j;   // faz o i pular a palavra inteira
                break;
            }
        }
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
            printf("Not ok! \n");
            continue;
        }

    }
}