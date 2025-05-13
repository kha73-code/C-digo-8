#include <stdio.h>

int main() {
    int N, acumulador = 0;

    
    printf("Ingrese un número: ");
    scanf("%d", &N);

    
    for (int i = 1; i <= N; i++) {
        acumulador = acumulador + i;
    }

   
    printf("Suma: ");
    for (int i = 1; i < N; i++) {
        printf("%d + ", i);
    }
    printf("%d = %d\n", N, acumulador);

    return 0;
}