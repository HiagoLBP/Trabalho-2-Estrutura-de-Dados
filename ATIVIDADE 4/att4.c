#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, i;
    float *notas, soma = 0.0, media;

    printf("Digite a quantidade de notas: \n");
    scanf("%d", &n);
    if (n <= 0) {
    printf("Digite uma quantidade positiva de notas!\n");
    return 1;
}


    notas = malloc(n * sizeof *notas);
    if (notas == NULL) {
    printf("Erro de alocacao\n");
    return 1;
}

    for(i = 0; i < n; i++){
        printf("Digite as notas: \n");
        scanf("%f", &notas[i]);
        soma = soma + notas[i];
    }
    media = soma / n;
    printf("\nA soma das notas e: %.2f\n", soma);
    printf("A media das notas e: %.2f\n", media);

    free(notas);
    notas = NULL;
    return 0;
}
