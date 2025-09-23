#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *vet;
    int i;

    printf("Digite um numero: \n");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Digite um numero inteiro positivo!\n");
        return 1;
    }

    vet = malloc(n * sizeof *vet);
    if (vet == NULL) {
        printf("Erro de alocacao!\n");
        return 1;
    }

    // Preenchendo o vetor
    for(i = 0; i < n; i++){
        printf("Digite um valor inteiro (Indice %d): ", i);
        scanf("%d", &vet[i]);
    }

    printf("\nVetor armazenado:\n");
    for(i = 0; i < n; i++){
        printf("|%d|\n", vet[i]);
    }

    free(vet);
    vet = NULL;
    return 0;
}
