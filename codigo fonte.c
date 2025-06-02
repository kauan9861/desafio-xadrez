#include <stdio.h>

// Função recursiva para simular o movimento da Torre (para a direita)
void moverTorre(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Direita\n");
    moverTorre(casasRestantes - 1);
}

// Função recursiva para simular o movimento da Rainha (para a esquerda)
void moverRainha(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

// Função recursiva para simular o movimento do Bispo (diagonal: cima e direita)
void moverBispoRecursivo(int passos) {
    if (passos == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(passos - 1);
}

// Função com loops aninhados para simular o Bispo com lógica extra (linha = vertical, coluna = horizontal)
void moverBispoComLoops(int movimentos) {
    for (int linha = 1; linha <= movimentos; linha++) {
        for (int coluna = 1; coluna <= 1; coluna++) {
            printf("Cima Direita\n"); // Diagonal = subir e ir para a direita
        }
    }
}

// Movimento do Cavalo (duas casas para cima e uma para a direita) com loops complexos
void moverCavalo() {
    int movimentos = 1; // Apenas 1 movimento de L como especificado

    printf("Movimento do Cavalo:\n");
    for (int m = 0; m < movimentos; m++) {
        int casas = 0;
        for (int i = 0, j = 0; i < 3; i++) {
            // Duas primeiras iterações: cima
            if (casas < 2) {
                printf("Cima\n");
                casas++;
                continue;
            }
            // Terceira: direita
            if (casas == 2) {
                printf("Direita\n");
                break; // Movimento em "L" completo
            }
        }
    }
}

int main() {
    // Quantidade de casas para cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Torre - recursiva
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // Bispo - recursiva
    printf("\nMovimento do Bispo (recursividade):\n");
    moverBispoRecursivo(casasBispo);

    // Bispo - com loops aninhados
    printf("\nMovimento do Bispo (loops aninhados):\n");
    moverBispoComLoops(casasBispo);

    // Rainha - recursiva
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // Cavalo - loops complexos
    printf("\n");
    moverCavalo();

    return 0;
}
