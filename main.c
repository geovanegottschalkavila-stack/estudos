#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

   int main() {
    SetConsoleOutputCP(65001);
    
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", n, i, n * i);
    }
    
    return 0;
}