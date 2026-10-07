#include <stdio.h>

int main() {

int i;
for (i = 1; i <= 5; i++) {
    switch (i) {
        case 1:
        case 2:
            printf("Pequeno\n");
            break; 
        case 3:
        case 4:
            printf("Medio\n");
            break;
        case 5:
            printf("Grande\n");
            break;
    }
}

    return 0;
}