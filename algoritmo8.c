#include <stdio.h>
#include <stdbool.h>

// Fa¸ca um c´odigo que apresente uma contagem regressiva na tela: de n a 0.

void FlushBuffer(){
    int temp = 0;

    while((temp = getchar()) != '\n' && temp != EOF){};
}

int main(){

    while(true){

        int Num = 0;

        printf("Enter Number: ");
        if (scanf(" %d", &Num) == 0) {printf("Invalid Entry! \n"); FlushBuffer(); continue;}

        printf("\n");

        for (int i = Num; i > 0; i--){
            printf("Number: %d \n", i);
        }

        break;
    }
}
