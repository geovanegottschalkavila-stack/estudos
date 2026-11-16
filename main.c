#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

    struct pessoa{
        char nome[50];
        int idade;
        float altura;
    };

   int main() {
    SetConsoleOutputCP(65001);

    struct pessoa p1;
    
    printf("\n-----------DADOS CADASTRAIS-----------\n");

    printf("Digite o nome da pessoa:\n");
    scanf("%s", p1.nome);

    printf("Digite a idade:\n");
    scanf("%d", &p1.idade);

    printf("Digite a altura:\n");
    scanf("%f", &p1.altura);

    printf("Os dados de %s são:\n",  p1.nome);
    printf("idadde:%d\n", p1.idade);
    printf("Aaltura:%.2f\n", p1.altura);

    return 0;
}