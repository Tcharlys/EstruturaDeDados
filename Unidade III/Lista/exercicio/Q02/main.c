#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(){
    Lista *l;

    l = lst_cria();

    l = lst_insere(l, 45);
    l = lst_insere(l, 56);
    l = lst_insere(l, 78);

    lst_imprime(l);

    l = lst_retira(l, 78);

    lst_imprime(l);

    l = ultimo(l);
    
    lst_imprime(l);

    lst_libera(l);

    return 0;
}