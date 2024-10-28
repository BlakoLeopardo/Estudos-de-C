#include <stdio.h>

int main() {
    int contador = 0; // Inicializa o contador
    char precionados;

    printf("Pressione 'Espaço' para contar, ou 'q' para sair.\n");

    // Loop para verificar a entrada do usuário
    while (1) {
        precionados = getchar();  // Lê um caractere

        // Verifica se o caractere é 'Espaço'
        if (precionados == ' ') {
            contador++;  // Incrementa o contador
            printf("Quantidade de vezes lidas: %d\n", contador);  // Mostra a contagem instantaneamente
        } else if (precionados == 'q') {
            break;  // Sai do loop ao pressionar 'q'
        }
    }

    printf("Contagem final: %d\n", contador);

    return 0;
}

// Codigo do ChatGPT :p