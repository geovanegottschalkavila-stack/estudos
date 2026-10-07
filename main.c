#include <stdio.h>

int main() {

   int operacao = 3;
int a = 10, b = 5;
switch (operacao) {
    case 1:
        printf("%d", a + b);
        break;
    case 2:
        printf("%d", a - b);
        break;
    case 3:
        printf("%d", a * b);
        break; 
}
    return 0;
}