#include <stdio.h>
int soma(int n) {
    if (n == 0) return 0;
    return n + soma(n - 1);
}

int main () {
    int num;
    printf("Digite um número positivo: ");
    scanf("%d", &num);
    printf("Soma recursiva do número %d = %d", num, soma (num));
    printf("\n");
    return 0;
}