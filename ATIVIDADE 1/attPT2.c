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

    for(i = 0; i < n; i++){
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", &vet[i]);
    }

    int *tmp = realloc(vet, n * 2 * sizeof *vet);
    if (tmp == NULL) {
        printf("Falha ao realocar!\n"); 
        free(vet);
        return 1;
    }
    vet = tmp;

    for(i = n; i < n * 2; i++){
        printf("Digite o valor adicional para a posicao (Inidice %d): ", i);
        scanf("%d", &vet[i]);
    }

    printf("\nVetor final:\n");
    for(i = 0; i < n * 2; i++){
        printf("|%d|\n", vet[i]);
    }

    free(vet);
    vet = NULL;
    return 0;
}
