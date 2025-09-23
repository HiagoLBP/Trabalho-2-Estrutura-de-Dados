# Projeto de Estrutura de Dados

**Alunos:** Daniel da Silva Oliveira e Hiago Rocha Souza  
**Disciplina:** Estrutura de Dados  
**Professor:** Reinaldo Monteiro Cotrim  
**Turma:** 2ADS  

## Descrição do Projeto

Este projeto contém exercícios práticos de C utilizando **alocação dinâmica**. O objetivo é praticar conceitos de ponteiros, gerenciamento de memória e manipulação de vetores e matrizes de forma dinâmica.

## Conteúdo do Projeto

### Parte 1

1. **Vetor Dinâmico (Questão 1)**  
   - Lê um número `n` e aloca dinamicamente um vetor de `n` inteiros.  
   - Preenche o vetor com valores fornecidos pelo usuário e imprime todos os elementos.

2. **Vetor Dinâmico com Realloc (Questão 2)**  
   - Modifica o programa da Questão 1 para dobrar o tamanho do vetor usando `realloc`.  
   - Mantém os valores antigos e permite preencher os novos elementos.

### Parte 2

1. **Matriz Dinâmica (int **) (Questão 1 da Parte 2)**  
   - Cria uma matriz `m x n` usando ponteiro de ponteiro.  
   - Preenche cada posição com `i + j` e exibe a matriz.

2. **Soma de Vetor de Inteiros (Questão 2 da Parte 2)**  
   - Aloca dinamicamente um vetor de inteiros, lê `n` valores e calcula a soma de todos.

3. **Cálculo de Média de Notas (Questão 3 da Parte 2)**  
   - Aloca dinamicamente um vetor de floats, lê `n` notas, calcula a soma e a média, e exibe os resultados.

## Funcionalidades

- Uso de `malloc` e `realloc` para alocação dinâmica.  
- Verificação de sucesso na alocação de memória (`!= NULL`).  
- Validação de entrada para garantir números inteiros positivos.  
- Liberação de memória com `free` ao final de cada programa.  

## Como Executar

1. Clone o repositório.  
2. Compile o arquivo desejado usando um compilador C, por exemplo:  
   ```bash
   gcc nome_do_arquivo.c -o programa.exe

- Depois execute: ./programa


