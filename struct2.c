#include <stdio.h>

int main()
{
    struct boletim{
        char nome_aluno[50];
        float notas[4];
        float resultado_final;
    };
    
    struct boletim boletins[3];
    
    int i, j, l, x;
    for (j = 0; j < 3; j++) {
        printf("Digite o nome do aluno: ");
        scanf("%s", &boletins[j].nome_aluno);
        fflush (stdin);
    
        for (i = 0; i < 4; i++) {
            printf("Digite a nota %d: ", i);
            scanf("%f", &boletins[j].notas[i]);
            fflush (stdin);
        }
        int resultado = 0;
        for (l = 0; l < 4; l++) {
            resultado = boletins[j].notas[l] + resultado;
            boletins[j].resultado_final = resultado/4;
        }
    }
  
    for (x = 0; x < 3; x++) {
        printf("\nNome do aluno %s \n", boletins[x].nome_aluno);
        for (i = 0; i < 4; i++) {
            printf("Atividade %d \t %0.2f \n", i+1, boletins[x].notas[i]);
        }
        printf("Resultado \t %0.2f", boletins[x].resultado_final);
    }