#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    int vetor[5] = {1, 2, 3, 4, 5}, i;

    //imprimindo os valores do vetor
        printf("Valores do vetor: ");
    for(i = 0; i < 5; i++){
        printf("%d\n", vetor[i]);
    }

    return 0;
}