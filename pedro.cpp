#include <stdio.h>

int main() {
    int soma;
    
    // Loop de 0 a 99, incrementando de 3 em 3
    for (int i = 0; i <= 100; i += 3) {
        // Verifica se ainda há três números disponíveis
        if (i + 2 <= 100) {
            soma = i + (i + 1) + (i + 2);
            printf("%d + %d + %d = %d\n", i, i + 1, i + 2, soma);
        }
    }
    
    return 0;
}
