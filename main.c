#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

   int main() {
    SetConsoleOutputCP(65001);
    
    float saldo = 500, saque;

    printf("Quanto você deseja sacar: ");
    scanf("%f", &saque);

    if(saldo < saque){
       printf("Saldo insuficiente!!");
    }else{
       saldo = saldo - saque; // Atualiza o saldo corretamente
       printf("Saque realizado com sucesso!! seu saldo atual é de: %.2f\n", saldo);
    }

    return 0;
}