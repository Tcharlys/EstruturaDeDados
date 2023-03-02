#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *fp;
    int nlinhas = 0;
    int c;

    fp = fopen("entrada.txt", "rt");
    if (fp == NULL){
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }
    else{
        printf("Arquivo criado.\n...\n");
    }
    
    while ((c = fgetc(fp)) != EOF){
        if (c == '\n'){
            nlinhas++;
        }
    }
    
    c = fclose(fp);
    if (c != 0){
        printf("Nao foi possivel fechar o arquivo\n");
    }
    else{
        printf("Arquivo fechado.\n");
    }
    
    printf("Numero de linhas = %d\n", nlinhas+1);
    
    return 0;
}