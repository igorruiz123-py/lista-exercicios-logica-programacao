#include <stdio.h>
#include <stdbool.h>

// Escreva um c´odigo que calcule o fatorial de um n´umero inteiro n˜ao negativo n determinado pelo usu´ario.

void FlushBuffer(){
    int temp = 0;

    while((temp = getchar()) != '\n' && temp != EOF){};
}

void CalcFatorial(int num){
    int x = 1;
    for (int i = num; i > 0; i--){
        x = x * i;
        printf("Number: %d \n", i);
    }

    printf("\n");

    printf("Fatorial: %d \n", x);
}

int main(){

    while(true){

        int num = 0;

        printf("Enter a number: ");
        if (scanf("%d", &num) == 0 || num < 1){
            printf("Invalid Entry! \n");
            FlushBuffer();
            continue;
        }

        CalcFatorial(num);

        break;
    }
}