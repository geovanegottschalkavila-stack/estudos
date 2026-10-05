#include <stdio.h>

int main() {

    float dinheiro, valor, troco;

    printf("Valor entregue pelo cliente: $");
    scanf("%f",&dinheiro);

    printf("Valor do produto: $");
    scanf("%f", &valor);

    troco = (dinheiro - valor);

    if(troco >= 0){
        printf("Devolva:%.2f$", troco);
    }else{
        printf("Valor insuficiente!!!");
    }

    return 0;
}