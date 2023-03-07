#include <stdio.h>

int main(void){
    FILE *fp;
    int c;

    fp = fopen("arquivo.txt", "rt");
    if (fp == NULL){
        printf("Nao foi possivel abrir o arquivo");
        return 1;
    }
    
    fputc('A', fp);
    
    c = fgetc(fp);
    printf(" %c\n", c);
    
    fclose(fp);
    
    return 0;
}