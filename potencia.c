#include <stdio.h>

// Função recursiva para calcular a potência de um número
int potencia(int base, int expoente) {
    // Caso base: qualquer número elevado a 0 é 1
    if (expoente == 0) return 1;
    
    // Caso recursivo: base^expoente = base * base^(expoente-1)
    return base * potencia(base, expoente - 1);
}

int main () {
    int num1, num2;
    
    // Solicita ao usuário o valor da base
    printf("Digite um número como base: ");
    scanf("%d", &num1);
    
    // Solicita ao usuário o valor do expoente
    printf("Digite um número como expoente: ");
    scanf("%d", &num2);
    
    // Calcula e exibe o resultado da potência
    printf("A potência de %d elevado a %d é igual a %d", num1, num2, potencia(num1, num2));
    printf("\n");
    
    return 0;
}
