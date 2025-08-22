#include <stdio.h>

// Função recursiva para calcular o n-ésimo número de Fibonacci
int fibonacci(int n) {
    // Caso base 1: Fibonacci(0) é 0
    if (n == 0) return 0;
    
    // Caso base 2: Fibonacci(1) é 1
    if (n == 1) return 1;
    
    // Caso recursivo: Fibonacci(n) = Fibonacci(n-1) + Fibonacci(n-2)
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int i, n_termos;
    
    // Solicita ao usuário o número de termos da sequência de Fibonacci
    printf("Digite um número positivo: ");
    scanf("%d", &n_termos);
    
    // Exibe a sequência de Fibonacci de até n_termos termos
    printf("Sequência de Fibonacci (%d primeiros):\n", n_termos);
    
    // Itera de 0 até n_termos-1 para imprimir os números de Fibonacci
    for (i = 0; i < n_termos; i++) {
        printf("%d ", fibonacci(i));  // Chama a função Fibonacci para cada termo
    }
    printf("\n");
    
    return 0;
}
