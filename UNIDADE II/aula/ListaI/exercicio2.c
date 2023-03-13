#include <stdio.h>

#define TAMANHO 10

int main() {
    int numeros[TAMANHO];
    int i, menor, maior, soma = 0;
    float media;
    FILE *entrada, *saida;

    // Abrir arquivo de entrada
    entrada = fopen("entradaEx2.txt", "rt");
    if (entrada == NULL) {
        printf("Erro ao abrir arquivo de entrada\n");
        return 1;
    }

    // Ler 10 inteiros do arquivo e armazená-los em um vetor
    for (i = 0; i < TAMANHO; i++) {
        fscanf(entrada, "%d", &numeros[i]);
    }

    // Fechar arquivo de entrada
    fclose(entrada);

    // Encontrar o menor e o maior elemento do vetor
    menor = numeros[0];
    maior = numeros[0];
    for (i = 1; i < TAMANHO; i++) {
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
    }

    // Calcular a média dos elementos do vetor
    for (i = 0; i < TAMANHO; i++) {
        soma += numeros[i];
    }
    media = (float)soma / TAMANHO;

    // Abrir arquivo de saída
    saida = fopen("saidaEx2.txt", "wt");
    if (saida == NULL) {
        printf("Erro ao abrir arquivo de saída\n");
        return 1;
    }

    // Escrever no arquivo de saída o menor elemento, o maior elemento e a média calculada
    fprintf(saida, "Menor elemento: %d\n", menor);
    fprintf(saida, "Maior elemento: %d\n", maior);
    fprintf(saida, "Média dos elementos: %.2f\n", media);

    // Fechar arquivo de saída
    fclose(saida);

    return 0;
}