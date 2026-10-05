#include <stdio.h>

int main() {

    int soma = 0;

    for(int i = 1; i <= 10; i++){
        
        
        printf("%d + %d = %d\n",soma,i, soma + i);
        soma = soma + i;
    }
    
    return 0;
}