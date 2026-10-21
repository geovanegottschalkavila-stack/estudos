#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

   int main() {
    SetConsoleOutputCP(65001);
    
    int numero;
    printf("Digite um valor (0 para sair):");
    scanf("%d", &numero);

    while( numero != 0 ) {
        printf("Você digitou:%d\n",numero);
        printf("Digite outro valor ( 0 para sair):");
        scanf("%d",&numero);
    }
    printf("Programa Encerrado!!");

    return 0;
}