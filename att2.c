#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, i, j;
    int **mat; // 

    printf("Digite a quantidade de linhas: ");
    scanf("%d", &m);
    printf("Digite a quantidade de colunas: ");
    scanf("%d", &n);

    // Alocando as linhas (m ponteiros)
    mat = malloc(m * sizeof *mat);
    // Alocando cada linha com n colunas
    for (i = 0; i < m; i++) {
        mat[i] = malloc(n * sizeof *mat[i]);
    }

    // Preenchendo a matriz com i + j
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            mat[i][j] = i + j;
        }
    }

    // Imprimindo a matriz
    printf("\nMatriz:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    // Liberando memória
    for (i = 0; i < m; i++) {
        free(mat[i]);
    }
    free(mat);

    return 0;
}
