#include <stdio.h>

#define QTD_LINHAS 10
#define QTD_COLUNAS 10

void multiplicarMatrizes(int matrizA[QTD_LINHAS][QTD_COLUNAS], int linA, int colA, 
                         int matrizB[QTD_LINHAS][QTD_COLUNAS], int linB, int colB, 
                         int matrizMult[QTD_LINHAS][QTD_COLUNAS]) {
    
    if (colA != linB) {
        printf("Multiplicação inválida: o número de colunas de A deve ser igual ao número de linhas de B.\n");
        return;
    }

    for (int i = 0; i < linA; i++) {
        for (int j = 0; j < colB; j++) {
            matrizMult[i][j] = 0; // Inicializa a posição
            for (int k = 0; k < colA; k++) {
                matrizMult[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }
}

int main() {
    int matrizA[QTD_LINHAS][QTD_COLUNAS] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    
    int matrizB[QTD_LINHAS][QTD_COLUNAS] = {
        {7, 8},
        {9, 10},
        {11, 12}
    };
    
    int matrizMult[QTD_LINHAS][QTD_COLUNAS] = {0};
    
    int linA = 2, colA = 3;
    int linB = 3, colB = 2;

    multiplicarMatrizes(matrizA, linA, colA, matrizB, linB, colB, matrizMult);

    printf("Resultado da multiplicação:\n");
    for (int i = 0; i < linA; i++) {
        for (int j = 0; j < colB; j++) {
            printf("%d ", matrizMult[i][j]);
        }
        printf("\n");
    }

    return 0;
}
