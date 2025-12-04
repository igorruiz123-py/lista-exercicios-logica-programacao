#include <stdio.h>
#include <stdbool.h>

// Fazer um programa que solicita um número decimal e imprime o correspondente em hexa

void FlushBuffer(){
    int temp = 0;

    while((temp = getchar()) != '\n' && temp != EOF){};
}

int CheckData(int *num){

    printf("Enter a number: ");
    if (scanf("%d", num) == 0){
        FlushBuffer();
        return 0;
    }

    return 1;
}

void ConvertToHexa(int num){
    
    char hex[20];
    int i = 0;

    while(num > 0){
        int rest = num % 16;

        if (rest < 10){
            hex[i] = '0' + rest;
        }
        else if (rest > 10){
            hex[i] = 'A' + (rest - 10);
        }

        i++;
        num /= 16;
    }

    for (int j = i - 1; j >= 0; j--){
        putchar(hex[j]);
    }
}

int main(){

    while(true){

        int num = 0;

        if (CheckData(&num)){
            ConvertToHexa(num);
            break;
        }
        else{
            printf("Invalid entry! \n");
            continue;
        }
    }
}