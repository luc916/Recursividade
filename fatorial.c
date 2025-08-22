#include <stdio.h>

// Função recursiva para calcular o fatorial de um número
int fatorial(int n) {
    // Caso base: fatorial de 0 ou 1 é 1
    if (n == 0 || n == 1) {
        return 1;  // Fatorial de 0 ou 1 é definido como 1
    } else {
        // Chamada recursiva: n * fatorial(n-1)
        return n * fatorial(n - 1);  // Multiplica o número atual pelo fatorial do número anterior
    }
}

int main() {
    int numero;
    
    // Solicita ao usuário um número inteiro positivo
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);
    
    // Exibe o fatorial calculado para o número fornecido
    printf("Fatorial de %d = %d\n", numero, fatorial(numero));
    
    return 0;
}
