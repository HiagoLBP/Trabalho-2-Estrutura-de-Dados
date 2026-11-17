# 🧩 Exercícios Práticos de Alocação Dinâmica (Trabalho 2 - Estrutura de Dados)

Repositório com exercícios acadêmicos desenvolvidos em **Linguagem C**, explorando o gerenciamento manual e dinâmico de memória via ponteiros (`malloc`, `realloc`, `free`), matrizes bidimensionais dinâmicas e validação de memória.

* **Alunos:** Daniel da Silva Oliveira e Hiago Rocha Souza ([@HiagoLBP](https://github.com/HiagoLBP))
* **Disciplina:** Estrutura de Dados
* **Professor:** Reinaldo Monteiro Cotrim
* **Turma:** 2ADS — IF Baiano Campus Guanambi

---

## 📌 Conteúdo das Atividades

| Atividade | Arquivo | Descrição do Problema | Funções Principais |
| :--- | :--- | :--- | :---: |
| **Atividade 1.1** | [`ATIVIDADE 1/att1.c`](./ATIVIDADE%201/att1.c) | Alocação dinâmica de vetor com `n` inteiros e preenchimento pelo usuário | `malloc`, `free` |
| **Atividade 1.2** | [`ATIVIDADE 1/attPT2.c`](./ATIVIDADE%201/attPT2.c) | Expansão dinâmica do vetor dobrando o tamanho via `realloc` e preservando dados | `realloc`, `free` |
| **Atividade 2** | [`ATIVIDADE 2/att2.c`](./ATIVIDADE%202/att2.c) | Criação de Matriz dinâmica $M \times N$ (`int**`) com preenchimento $i + j$ | `malloc`, `free` |
| **Atividade 3** | [`ATIVIDADE 3/att3.c`](./ATIVIDADE%203/att3.c) | Alocação dinâmica de vetor, leitura de $n$ elementos e soma total acumulada | `malloc`, `free` |
| **Atividade 4** | [`ATIVIDADE 4/att4.c`](./ATIVIDADE%204/att4.c) | Vetor dinâmico de ponto flutuante (`float*`) para cálculo de média aritmética de notas | `malloc`, `free` |

---

## 🛡️ Boas Práticas Adotadas

* Verificação obrigatória de integridade após alocação (`if (ponteiro == NULL)`).
* Liberação de memória com `free()` no encerramento de todas as rotinas para evitar vazamentos (*memory leaks*).
* Desalocação bidimensional correta de matrizes dinâmicas (linha a linha seguida do ponteiro mestre).

---

## 🚀 Como Compilar e Executar

Com o **GCC** instalado:

```bash
# Exemplo: Compilar a Atividade 2 (Matriz Dinâmica)
gcc "ATIVIDADE 2/att2.c" -o att2

# Executar no Windows
.\att2.exe

# Executar no Linux / macOS
./att2
```

---

## 👨‍💻 Autores

Desenvolvido por **Daniel da Silva Oliveira** e **[Hiago L. B. P.](https://github.com/HiagoLBP)**.
