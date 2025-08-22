#include <stdio.h>

// Função recursiva para calcular a soma de todos os números inteiros de 1 até n
int soma(int n) {
    // Caso base: quando n for 0, a soma é 0
    if (n == 0) return 0;
    
    // Caso recursivo: soma(n) = n + soma(n-1)
    return n + soma(n - 1);
}

int main () {
    int num;
    
    // Solicita ao usuário um número positivo
    printf("Digite um número positivo: ");
    scanf("%d", &num);
    
    // Chama a função soma e exibe o resultado
    printf("Soma recursiva do número %d = %d", num, soma(num));
    printf("\n");
    
    return 0;
}
