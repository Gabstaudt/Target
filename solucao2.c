#include <stdio.h>
#include <string.h>

int contar_a(const char* str) {
    int contagem = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'A') {
            contagem++;
        }
    }
    return contagem;
}

int main() {
    char string_informada[100];
    printf("Informe uma string: ");
    fgets(string_informada, sizeof(string_informada), stdin);

    int quantidade = contar_a(string_informada);
    if (quantidade > 0) {
        printf("A letra 'a' aparece %d vezes.\n", quantidade);
    } else {
        printf("A letra 'a' não está presente na string.\n");
    }

    return 0;
}
