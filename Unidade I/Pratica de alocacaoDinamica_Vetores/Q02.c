#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int num_questoes, i, acertos = 0, porcentagem_aprovados;
    float nota;

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
    
    printf("\nGabarito:\n");
    for(i=0; i<num_questoes; i++)
    {
        printf("Questão %d - %c\n", i+1, gabarito_correto[i]);
    }

    char *gabarito_aluno = (char *)malloc(num_questoes*sizeof(char));
    if (gabarito_aluno == NULL)
    {
        printf("Memoria insuficiente!\n");
        exit(1);    
    }
    
    printf("Gabarito do aluno:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Insira o gabarito do aluno %d\n", i+1);
        scanf(" %c", &gabarito_aluno[i]);

        if (gabarito_aluno[i] == gabarito_correto[i])
        {
            acertos++;
        }       

        nota=(acertos*100)/num_questoes;

        if(nota>=60)
        {
            porcentagem_aprovados=+1;
        }
        
        printf("Acertos: %d\n", acertos);
        printf("Nota do aluno %d: %f\n", i+1, nota);
        printf("\n");
        
        acertos=0;
    }
    
    printf("\nPorcentagem de aprovação: %d%%\n", (porcentagem_aprovados*100)/10);
    free(gabarito_aluno);

    return 0;
}