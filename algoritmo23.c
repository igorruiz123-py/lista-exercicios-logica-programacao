#include <stdio.h>

// Fazer um programa em C que imprime uma tabela com a tabuada de 1 a 9

int main(){

    for (int i = 1; i < 10; i++){
        for (int j = 1; j <= 10; j++){
            printf("%3d ", i * j);
        }

        printf("\n");
    }
}