#include <stdio.h>
#include <stdbool.h>

/*
Leia do usuário um tamanho n e imprima um triangulo retangulo e um triangulo regular
*/

void FlushBuffer(){
    int temp = 0;

    while((temp = getchar()) != '\n' && temp != EOF){};
}

int CheckData(int *num){

    printf("Enter the value of the size: ");
    if (scanf("%d", num) == 0){
        FlushBuffer();
        return 0;
    }

    return 1;
}

void DisplayTask(int num){

    printf("Retangular triangle: \n");
    printf("\n");

    for (int i = 1; i <= num; i++){
        for (int j = num; j >= 1; j--){
            if (i >= j){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n");

    printf("Relugar triangle: \n");
    printf("\n");

    for (int k = 1; k <= num; k++){
        for (int l = num; l >= 1; l--){
            if (k >= l){
                printf("* ");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main(){

    while(true){

        int num = 0;

        if (CheckData(&num)){
            DisplayTask(num);
            break;
        }
        else{
            printf("Invalid entry! \n");
            continue;
        }
    }
}