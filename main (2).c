#include <stdio.h>

int main()
{
    struct dados_de_alunos{
        char nome[100];
        float media;
        int ano;
    };
    
    struct dados_de_alunos aluno;
    printf("Digite o nome do aluno.");
    fgets(aluno.nome,100,stdin);
    printf("Digite a média escolar.");
    scanf("%f",&aluno.media);
    printf("Digite o ano escolar.");
    scanf("%d",&aluno.ano);
    
    printf("nome...: %s", aluno.nome);
    printf("media...: %f\n", aluno.media);
    printf("ano...: %d\n", aluno.ano);
    
}
