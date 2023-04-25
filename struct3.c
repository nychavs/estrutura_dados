#include <stdio.h>
struct boletim{
    char nome_aluno[50];
    float notas[4];
    float resultado_final;
};
    
int l;

struct boletim ler_notas(){
    struct boletim boletins;
    int i;
        printf("Digite o nome do aluno: ");
        scanf("%s", &boletins.nome_aluno);
        fflush (stdin);
    
        for (i = 0; i < 4; i++) {
            printf("Digite a nota %d: ", i);
            scanf("%f", &boletins.notas[i]);
            fflush (stdin);
        }
        int resultado = 0;
        for (l = 0; l < 4; l++) {
            resultado = boletins.notas[l] + resultado;
            boletins.resultado_final = resultado/4;
        }
    return boletins;
}

void imprimir_notas(struct boletim boletins){
    int i;
        printf("\nNome do aluno %s \n", boletins.nome_aluno);
        for (i = 0; i < 4; i++) {
            printf("Atividade %d \t %0.2f \n", i+1, boletins.notas[i]);
    }
        printf("Resultado \t %0.2f", boletins.resultado_final);
}

int main()
{
    int i;
    struct boletim b[3];
    for (i = 0; i < 3; i++) {
        b[i]=ler_notas();
    }
    for (i = 0; i < 3; i++) {
        imprimir_notas(b[i]);
    }
}