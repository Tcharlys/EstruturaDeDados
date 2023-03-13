#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *fp;

    fp = fopen ("teste.txt", "wt");
    if (fp == NULL){
        printf("Erro na abertura do arquivo\n");
        exit(1);
    }
    else{
        printf("O arquivo foi aberto\n...\n");
    }

    int fecha = fclose(fp);
    if (fecha != 0){
        printf("Nao foi possivel fechar o arquivo\n");
    }
    else{
        printf("Arquivo fechado\n");
    }

    return 0;
}