#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, i, j;
    int **mat; 

    printf("Digite a quantidade de linhas: ");
    scanf("%d", &m);

    if (m <= 0) {
    printf("Quantidade de linhas deve ser positiva!\n");
    return 1;
}

    printf("Digite a quantidade de colunas: ");
    scanf("%d", &n);

    if (n <= 0) {
    printf("Quantidade de colunas deve ser positiva!\n");
    return 1;
}

    mat = malloc(m * sizeof *mat);
    if (mat == NULL) {
    printf("Erro de alocacao\n");
    return 1;
}

    for (i = 0; i < m; i++) {
        mat[i] = malloc(n * sizeof *mat[i]);
        mat[i] = malloc(n * sizeof *mat[i]);
    if (mat[i] == NULL) {
    printf("Erro de alocacao na linha %d\n", i);
    return 1; 
}

}

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            mat[i][j] = i + j;
        }
    }

    printf("\nMatriz:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < m; i++) {
        free(mat[i]);
    }
    free(mat);
    mat = NULL;
    return 0;
}
