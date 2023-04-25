#include <stdio.h>

void encontraLetra(char palavra[], char letra){
    int encontrou = 0;
    for (int i = 0; palavra[i] != '\0'; i++) {
        if (palavra[i] == letra){
            printf("\nletra %c na posicao: %d", letra, i+1);
            encontrou = 1;
            break;
        }
    }
    if (encontrou == 0){
        printf("nao tem a letra %c na palavra %s", letra, palavra);
    }
}

int main()
{
    char palavra[25];
    char letra;
    printf("digite a palavra: ");
    scanf("%s", &palavra);
    __fpurge(stdin);
    printf("\ndigite a letra a ser encontrada: ");
    scanf("%c", &letra);
    encontraLetra(palavra, letra);

    return 0;
}