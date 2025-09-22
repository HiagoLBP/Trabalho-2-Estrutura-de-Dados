#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, *vet;
    int i, soma = 0;
    printf("Digite um numero: \n");
    scanf("%d", &n);
    vet = malloc(n * sizeof * vet);
    for(i = 0; i < n; i++){
        printf("Digite os números em relação a quantidade: \n");
        scanf("%d", &vet[i]);
        soma += vet[i];
        printf("Soma: %d\n", soma);
    }
    free(vet);
    return 0;
}
