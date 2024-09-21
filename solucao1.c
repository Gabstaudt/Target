#include <stdio.h>

int pertence_fibonacci(int num) {
    int a = 0, b = 1, temp;
    if (num == 0 || num == 1) return 1;
    while (b < num) {
        temp = b;
        b = a + b;
        a = temp;
    }
    return b == num;
}

int main() {
    int numero_informado;
    printf("Informe um número: ");
    scanf("%d", &numero_informado);

    if (pertence_fibonacci(numero_informado)) {
        printf("O número %d pertence à sequência de Fibonacci.\n", numero_informado);
    } else {
        printf("O número %d não pertence à sequência de Fibonacci.\n", numero_informado);
    }

    return 0;
}
