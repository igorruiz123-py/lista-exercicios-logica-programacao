#include <stdio.h>
#include <stdbool.h>

// Dados um inteiro x e um inteiro não-negativo n, calcular x n.
 
void FlushBuffer(){
    int temp = 0;

    while((temp = getchar()) != '\n' && temp != EOF){};
}

int CheckData(int *x, int *n){

    printf("Enter a number: ");
    if (scanf(" %d", x) == 0){
        printf("\n");
        FlushBuffer();
        return 0;
    }

    printf("\n");
    
    printf("Enter a number: ");
    if (scanf(" %d", n) == 0){
        printf("\n");
        FlushBuffer();
        return 0;
    }

    return 1;
}

void CalcPower(int x, int n){

    int mult = 1;
    for (int i = 0; i < n; i++){
        mult = mult * x;
    }

    printf("Number: %d \n", mult);
}

int main(){

    while(true){

        int x = 0;
        int n = 0;

        if (CheckData(&x, &n)){
            CalcPower(x, n);
            break;
        }
        else {
            printf("invalid entry! \n");
            continue;
        }
    }
}
