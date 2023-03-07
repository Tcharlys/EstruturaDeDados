#include <stdio.h>

int main() {
    int n; // número de questões
    char gabarito[100]; // vetor que armazena o gabarito da prova
    char respostas[10][100]; // matriz que armazena as respostas dos 10 alunos
    float notas[10]; // vetor que armazena a nota de cada aluno
    float nota_minima = 6.0; // nota mínima para ser aprovado
    float porcentagem_aprovacao; // porcentagem de aprovação
    int i, j; // variáveis de controle dos loops
    
    // leitura do número de questões e do gabarito da prova
    printf("Digite o número de questões: ");
    scanf("%d", &n);
    printf("Digite o gabarito da prova: ");
    scanf("%s", gabarito);
    
    // leitura das respostas dos 10 alunos
    for (i = 0; i < 10; i++) {
        printf("Digite as respostas do aluno %d: ", i+1);
        scanf("%s", respostas[i]);
        
        // cálculo da nota do aluno
        notas[i] = 0.0;
        for (j = 0; j < n; j++) {
            if (respostas[i][j] == gabarito[j]) {
                notas[i] += 10.0/n;
            }
        }
    }
    
    // exibição da nota de cada aluno
    for (i = 0; i < 10; i++) {
        printf("A nota do aluno %d é %.1f\n", i+1, notas[i]);
    }
    
    // cálculo da porcentagem de aprovação
    int aprovados = 0;
    for (i = 0; i < 10; i++) {
        if (notas[i] >= nota_minima) {
            aprovados++;
        }
    }
    porcentagem_aprovacao = (float)aprovados * 100.0 / 10.0;
    
    // exibição da porcentagem de aprovação
    printf("A porcentagem de aprovação é %.2f%%\n", porcentagem_aprovacao);
    
    return 0;
}