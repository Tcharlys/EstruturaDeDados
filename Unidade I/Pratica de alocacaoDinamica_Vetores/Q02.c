#include <stdio.h>
#include <stdlib.h>

#define ALUNOS 10;

int main(void){
    
    int num_questoes, i, acertos = 0;

    // solicitando o numero de questoes na prova
    printf("Digite o numero de questoes da prova\n");
    scanf("%d",&num_questoes);

    // criando um vetor e alocando dinamicamente
    char *gabarito_correto= (char *)malloc(num_questoes*sizeof(char));
    
    //verificando se o vetor foi alocado na memoria
    if (gabarito_correto == NULL)
    {
        printf("Memoria insuficiente!\n");
        exit(1);
    }
    
    // pedindo o gabarito do certo
    printf("Informe o gabarito.\n");
    for ( i = 0; i < num_questoes; i++)
    {
        scanf(" %c", &gabarito_correto[i]);
    }
    
    
    char *gabarito_aluno = (char *)malloc(num_questoes*sizeof(char));
    if (gabarito_aluno == NULL)
    {
        printf("Memoria insuficiente!\n");
        exit(1);    
    }
    
    
    for (i = 0; i < ALUNOS; i++)
    {
        printf("Insira a alternativa da questao %d\n", i+1);
        scanf(" %c", &gabarito_aluno[i]);

        if (gabarito_aluno[i] == gabarito_correto[i])
        {
            acertos++;
        }       
    }
        
    float nota;

    nota = ((10/num_questoes) * acertos);

    return 0;
}