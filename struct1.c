#include <stdio.h>

int main()
{
    struct _atividades{
        char nome_aluno[50];
        float notas[4];
        float resultado_final;
    };
    
    struct _atividades a1;
    
    printf("Digite o nome do aluno: ");
    scanf("%s", &a1.nome_aluno);
    fflush (stdin);
    int i;
    for (i = 0; i < 4; i++) {
        printf("Digite a nota %d: ", i);
        scanf("%f", &a1.notas[i]);
        fflush (stdin);
    }
    int resultado = 0;
    for (i = 0; i < 4; i++) {
        resultado = a1.notas[i] + resultado;
        a1.resultado_final = resultado/4;
    }
    
    printf("Nome do aluno %s \n", a1.nome_aluno);
    for (i = 0; i < 4; i++) {
        printf("Atividade %d \t %0.2f \n", i+1, a1.notas[i]);
    }
    printf("Resultado \t %0.2f", a1.resultado_final);
}

