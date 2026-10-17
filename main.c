#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

   int main() {
    SetConsoleOutputCP(65001);
    
    float a, b, c;
    float media;

    printf("Digite anota do aluno a: ");
    scanf("%f", &a);
    
    printf("Digite a nota do aluno b: ");
    scanf("%f", &b);

    printf("Digite a nota do aluno c: ");
    scanf("%f", &c);

    media = (a + b + c) / 3;

    printf("O valor da Média Geral é:%.2f", media);

    return 0;
}