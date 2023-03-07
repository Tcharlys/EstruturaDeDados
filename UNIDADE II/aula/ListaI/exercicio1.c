#include <stdio.h>
#include <string.h>

int main(void){
    FILE *ARQentrada, *ARQsaida;
    float nota1, nota2, nota3, media = 0;
    char nome[50], linha[100];

    ARQentrada = fopen("ARQentrada.txt", "r");
    if (ARQentrada == NULL){
        printf("Nao foi possivel abrir o arquivo\n");
        return 1;
    }
    
    ARQsaida = fopen("ARQsaida.txt", "w");
    if (ARQsaida == NULL){
        printf("Nao foi possivel abrir o arquivo\n");
        return 1;
    }
    
    while (fgets(linha, 100, ARQentrada) != NULL){
        sscanf(linha, "%20[^\t]\t%f\t%f\t%f", nome, &nota1, &nota2, &nota3);
        media = (nota1+nota2+nota3)/3;

        fprintf(ARQsaida, "%s\t%.1f\t %s\n", nome, media, (media >= 7.0)?"Aprovado":"Reprovado");
    }
    
    fclose(ARQentrada);
    fclose(ARQsaida);

    return 0;
}