#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, *vet;
    int i, soma = 0;
    printf("Digite um numero: \n");
    scanf("%d", &n);
    if (n <= 0) {
    printf("Digite um numero inteiro positivo!\n");
    return 1;
}
    vet = malloc(n * sizeof * vet);
    
    if (vet == NULL) {
    printf("Erro de alocacao\n");
    return 1;
}


    for(i = 0; i < n; i++){
        printf("Digite os numeros em relacao a quantidade: \n");
        scanf("%d", &vet[i]);
        soma += vet[i];
        printf("\nValor que esta na posicao %d do indice: %d\n", i, vet[i]);
    }
    printf("\nSoma: %d\n", soma);
    free(vet);
    vet = NULL;
    return 0;
}
