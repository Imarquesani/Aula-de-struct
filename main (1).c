#include <stdio.h>

int main()
{
    struct dados_de_alunos
    {
        char nome[50];
        float media;
        int ano;
    };
    struct dados_de_alunos aluno;
    printf("digite o nome do aluno:");
    fgets(aluno.nome, 50, stdin);
    printf("digite a media escolar:");
    scanf("%f",&aluno.media);
    printf("digite o ano escolar:");
    scanf("%d",&aluno.ano);
    
    printf("Nome:%s", aluno.nome);
    printf("Media:%f\n", aluno.media);
    printf("Ano:%d\n", aluno.ano);


    return 0;
}
