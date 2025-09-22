#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, *vet;
    int i;
    printf("Digite um numero: \n");
    scanf("%d", &n);
    vet = malloc(n * sizeof * vet); 
    for(i = 0; i < n; i++){
        printf("Digite numeros: \n");
        scanf("%d", &vet[i]);
    }

    for(i = 0; i < n; i++){
        printf("|%d|", vet[i]);
    }

    int *tmp = realloc(vet, n * 2 * sizeof  *vet);
    if (tmp == NULL)    
    {
        printf("Falha\n"); 
        free(vet);
        return 1;
    }


    vet = tmp;
    for(i = n; i < n * 2; i++){
        printf("Digite mais numeros: \n");
        scanf("%d", &vet[i]);
    }

    for(i = 0; i < n * 2; i++){
        printf("|%d|", vet[i]);
    }

    free(vet);
return 0;
}




//Leia um número n e aloque dinamicamente um vetor de n inteiros. Preencha com valores lidos do usuário e depois
//imprima todos.