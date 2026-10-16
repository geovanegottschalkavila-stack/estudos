#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

   int main() {
    
    int a, b;
    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    if(a > b){
        printf("O maior e a opçao: a");
    } else {
        printf("O maior e a opçao: b");
    }
    
    return 0;
}