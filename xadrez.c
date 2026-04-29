#include <stdio.h>

int main() {
    int torre = 0;
    int bispo = 0;
    int rainha = 0;

    printf("Quantidade de casas que a peça Torre vai se mover para direita:\n");
    scanf("%d", &torre);
    for(int i = 0; i < torre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Bispo - 5 casas diagonal (while)
    printf("Quantidade de casas que a peça Bispo vai se mover para cima e direita:\n");
    scanf("%d", &bispo);
    int b = 0;
    while(b < bispo) {
        printf("Cima, Direita\n");
        b++;
    }
    printf("\n");

    // Rainha - 8 casas esquerda (do-while)
    printf("Quantidade de casas que a peça Rainha vai se mover para esquerda:\n");
    scanf("%d", &rainha);
    int r = 0;
    do {
        printf("Esquerda\n");
        r++;
    } while(r < rainha);

    return 0;
}
