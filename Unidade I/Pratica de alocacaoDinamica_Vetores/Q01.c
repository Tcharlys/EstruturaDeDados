#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int Qtdpessoas, i, Qtd_feminino = 0, Qtd_masculino = 0;

    // solicitando a quantidade de pessoas a serem entrevistadas
    printf("Digite o numeros de pessoas que serao entrevistadas\n");
    scanf("%d", &Qtdpessoas);

    // alocando criando um vetor e alocando dinamicamente
    char *sex_entrevistado = (char *) malloc(Qtdpessoas*sizeof(char));
    
    //verificando se o vetor foi alocado na memoria
    if (sex_entrevistado == NULL)
    {
        printf("Memoria insuficiente\n");
        exit(1);
    }
    
    // alocando criando um vetor e alocando dinamicamente
    int *opi_produto = (int *) malloc(Qtdpessoas*sizeof(int));
    
    //verificando se o vetor foi alocado na memoria
    if (opi_produto == NULL)
    {
        printf("Memoria insuficiente\n");
        exit(1);
    }

    // preenchendo os vetors
    for (i = 0; i < Qtdpessoas; i++)
    {
        printf("Sexo do entrevistado:\n F. para feminino\n M. para masculino\n");
        scanf(" %c", &sex_entrevistado[i]);

        printf("Opiniao sobre o o Produto:\n 0. nao gostou\n 1.gostou\n");
        scanf(" %d", &opi_produto[i]);
    }
    
    // verificando os resultados
    for (i = 0; i < Qtdpessoas; i++)
    {   
        // se o entrevistado for feminino e se gosto do produto
        if((sex_entrevistado[i] == 'F') || (sex_entrevistado[i] == 'f') && (opi_produto[i] == 1))
        {
            Qtd_feminino++;
        }

        // se o entrevistado for masculino e se gosto do produto
        if ((sex_entrevistado[i] == 'M') || (sex_entrevistado[i] == 'm') && (opi_produto[i] == 1))
        {
            Qtd_masculino++;
        }
    }
    
    // verificando a porcentagem de pessoas que gostaram do produto com base o seu genero
    Qtd_feminino = ((Qtd_feminino*100.0f) / Qtdpessoas);
    Qtd_masculino = ((Qtd_masculino*100.0f) / Qtdpessoas);
    
    // imprimindo os resultados
    printf("\nMulheres que gostaram do produto: %d %%\nHomens que gostaram do produto: %d %%\n", Qtd_feminino, Qtd_masculino);

    free(sex_entrevistado);
    free(opi_produto);

    return 0;
}