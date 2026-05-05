#include <stdio.h>

// Função recursiva para a Torre (Movimento: Direita)
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

// Função recursiva para o Bispo (Movimento: Cima e Direita)
void moverBispo(int casas) {
    if (casas > 0) {
        printf("Cima, Direita\n");
        moverBispo(casas - 1);
    }
}

// Função recursiva para a Rainha (Movimento: Esquerda)
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

int main() {
    // Definição das constantes de movimento conforme requisitos
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // 1. Torre: Recursividade
    printf(" Movimento da Torre \n");
    moverTorre(casasTorre);
    printf("\n");

    // 2. Bispo: Recursividade + Loops aninhados
    // O loop externo gerencia a vertical, o interno a horizontal
    printf(" Movimento do Bispo \n");
    for (int i = 0; i < casasBispo; i++) {
        for (int j = 0; j < 1; j++) {
            moverBispo(1); // Chama a recursão por casa
        }
    }
    printf("\n");

    // 3. Rainha: Recursividade
    printf(" Movimento da Rainha \n");
    moverRainha(casasRainha);
    printf("\n");

    // 4. Cavalo: Loops complexos (L: duas p/ cima, uma p/ direita)
    printf("Movimento do Cavalo\n");
    for (int i = 0, j = 0; i < 2; i++) {
        printf("Cima\n");
        if (i == 1) { // Após duas casas p/ cima, move p/ direita
            for (j = 0; j < 1; j++) {
                printf("Direita\n");
            }
        }
    }

    return 0;
}
