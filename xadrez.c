#include <stdio.h>

int main() {
    // Torre - 5 casas direita (for)
    printf("TORRE (Direita x5):\n");
    for(int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Bispo - 5 casas diagonal (while)
    printf("BISPO (Diagonal x5):\n");
    int b = 0;
    while(b < 5) {
        printf("Cima, Direita\n");
        b++;
    }
    printf("\n");

    // Rainha - 8 casas esquerda (do-while)
    printf("RAINHA (Esquerda x8):\n");
    int r = 0;
    do {
        printf("Esquerda\n");
        r++;
    } while(r < 8);

    return 0;
}
