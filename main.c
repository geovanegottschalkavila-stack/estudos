#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

   int main() {
    SetConsoleOutputCP(65001);
    
    int voto = 0;
    int candidatoA = 0;
    int candidatoB = 0;

    do{
        printf("\n----------votação------------\n");
        printf("Candidato A = 1\n");
        printf("Candidato B = 2\n");
        printf("Digite 0 pra sair\n");
        printf("Digite seu voto:");
        scanf("%d", &voto);
    
        switch (voto){ //o switch conta a quantidade de votos e adiciona a variavel correspondente
            
            case 1:
            candidatoA++;
            printf("Você votou no candidato A\n");
            break;

            case 2:
            candidatoB++;
            printf("Você votou no candidato B\n");
            break;

            case 0:
            printf("Programa encerrado!!\n");
            break;

            default:
            printf("Voto inválido!!");
            break;
        }

    }while(voto != 0);//usado para  repetir o programa varias vezes 

        printf("Votos do candidato A:%d\n", candidatoA);
        printf("Votos do candidato B:%d\n", candidatoB);
        printf("Programa encerrado!!");

    return 0;
}