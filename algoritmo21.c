#include <stdio.h>
#include <stdbool.h>

/*
Construa um programa que receba um número e verifique se ele é um número triangular.
(Um número é triangular quando é resultado do produto de três números consecutivos.
Exemplo: 24 = 2 x 3 x 4)
*/

void FlushBuffer(){
    int temp = 0;

    while((temp = getchar()) != '\n' && temp != EOF){};
}

int CheckData(int *num){

    printf("Enter a number: ");
    if (scanf(" %d", num) == 0){
        printf("\n");
        FlushBuffer();
        return 0;
    }

    printf("\n");

    return 1;
}

int IsTriangularNumber(int num){

    for (int i = 1; i < num; i++){
        if (i * (i + 1) * (i + 2) == num){
            return 1;
        }
    }

    return 0;
}

int main(){

    while(true){

        int num = 0;

        if (CheckData(&num)){
            if (IsTriangularNumber(num)){
                printf("%d is a triangular number! \n", num);
                break;
            }
            else {
                printf("%d is not a triangular number! \n", num);
                break;
            }
        }

        else {
            printf("Invalid entry! \n");
            continue;
        }
    }
}