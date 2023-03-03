#include <stdio.h>

int main(void){
    FILE *fp;

    fp = fopen("entrada.txt", "wt");
    if (fp == NULL){
        return 1;
    }
    
    fputc('A', fp);
    
    
    fclose(fp);
    
    return 0;
}