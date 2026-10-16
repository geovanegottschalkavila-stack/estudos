#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

   int main() {
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);
    if (numero % 2 == 0){
        printf("O numero e par");
    } else {
        printf("O numero e impar");
    } 
    
    return 0;
}