#include <stdio.h>
int potencia(int base, int expoente) {
    if (expoente == 0) return 1;
    return base * potencia(base, expoente - 1);
}

int main () {
    int num1, num2;
    printf("Digite um número como base: ");
    scanf("%d", &num1);
    printf("Digite um número como expoente: ");
    scanf("%d", &num2);
    printf("A potência de %d elevado a %d é igual a %d", num1, num2, potencia(num1, num2));
    printf("\n");
    return 0;
}