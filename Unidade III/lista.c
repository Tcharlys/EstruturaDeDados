#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct lista{
    int info;
    struct lista *prox;
};
typedef struct lista Lista;

Lista *lst_cria(void){
    return NULL;
}

Lista *lst_insere(Lista *l, int i){
    Lista *novo = (Lista*) malloc(sizeof (Lista));

    novo->info;
    novo->prox;

    return novo;
}

void lst_imprime(Lista *l){
    Lista *p;

    for (p = l; p != NULL; p = p->prox){
        printf("Info = %d\n", p->info);
    }
}

int lst_vazia(Lista *l){
    if(l == NULL)
        return 1;
    else
        return 0;
}

Lista * lst_busca(Lista *l, int v){
    Lista *p;

    for (p = l; p != NULL; p = p->prox){
        if (p->info == v){
            return p;
        }
    }
    return NULL;
    
}

Lista *lst_retira(Lista *l, int v){
    Lista *ant = NULL;
    Lista *p = l;

    while (p != NULL && p->info != v){
        ant = p;
        p = p->prox;
    }
    
    if (p == NULL){
        return 1;
    }
    if (ant == NULL){
        l = p->prox;
    }
    else{
        ant->prox = p->prox; 
    }

    free(p);

    return 1;
}

void lst_libera(Lista *l){
    Lista *p = l;

    while (p != NULL){
        Lista *t = p->prox;

        free(p);

        p = t;
    }
}
int main(){

    return 0;
}