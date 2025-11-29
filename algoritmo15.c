#include <stdio.h>
#include <stdbool.h>

// Escreva um programa que leia trˆes inteiros k, a e b. Em seguida:
// Apresente os m´ultiplos de k no intervalo [a, b];
// Conte quantos s˜ao;
// Calcule a soma e a m´edia desses m´ultiplos;


void FlushBuffer(){
    int temp = 0;

    while((temp = getchar()) != '\n' && temp != EOF){};
}

void CalcTasks(int k, int a, int b){
    int counter = 0;
    int sum = 0;
    float mean = 0;

    // Apresentando os números multiplos de k
    for (int i = a; i <= b; i++){
        if (i % k == 0){
            counter++;
            sum = sum + i;
            printf("Number Multiple of '%d': %d \n", k, i);
        }
    }

    printf("\n");

    // Apresentando a quantidade de multiplos de k
    printf("Total of multiples: %d \n", counter);

    printf("\n");

    // Apresentando a soma de multiplos de k
    printf("Sum of multiples: %d \n", sum);

    printf("\n");

    // Apresentando a médias de multiplos de k
    mean = sum / counter;
    printf("Mean of multiples: %.2f \n", mean);

    printf("\n");
}   

int main(){

    while(true){

        int k = 0;
        int a = 0;
        int b = 0;

        // Entrada de dados K
        printf("Enter Number K: ");
        if (scanf("%d", &k) == 0){printf("Invalid Entry! \n"); FlushBuffer(); continue;}

        printf("\n");

        // Entrada de dados A
        printf("Enter Number A: ");
        if (scanf("%d", &a) == 0){printf("Invalid Entry! \n"); FlushBuffer(); continue;}

        printf("\n");

        // Entrada de dados B
        printf("Enter Number B: ");
        if (scanf("%d", &b) == 0){printf("Invalid Entry! \n"); FlushBuffer(); continue;}

        printf("\n");

        CalcTasks(k, a, b);

        break;
    }
}