#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void){
    int c;
    char entrada[121];
    char saida[121];
    FILE *e;
    FILE *s;

    printf("Digite o nome do arquivo de entrada: ");
    scanf(" %120s", entrada);

    printf("Digite o nome do arquivo de saida: ");
    scanf(" %120s", saida);

    e = fopen(entrada, "rt");
    if (e == NULL){
        printf("Não foi possivel abrir o arquivo de entrada\n...\n");
        exit(1);
    }
    else{
        printf("Arquivo de entrada foi aberto.\n");
    }

    s = fopen(saida, "wt");
    if (s == NULL){
        printf("Não foi possivel abrir o arquivo de saida\n...\n");
        
        fclose(e);

        exit(1);
    }
    else{
        printf("Arquivo de saida foi aberto.\n");
    }

    while ((c = fgetc(e)) != EOF){
        fputc(toupper(c), s);
    }
    
    fclose(e);
    fclose(s);

    return 0;
}