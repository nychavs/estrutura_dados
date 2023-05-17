
#include <stdio.h>
#define tam_max 5

typedef struct _lista{
    int vetor[tam_max];
    int fim;
} lista;

lista l;

void inicializar(){
    l.fim = -1;
}

int verificarVazia(){
    if (l.fim==-1){
        return 1;
    }else{
        return 0;
    }
}

int verificarCheia(){
    if (l.fim==tam_max-1){
        return 1;
    }else{
        return 0;
    }
}

void inserir(int dado, int posicao){
    if(!verificarCheia()){
        if(posicao>l.fim){
            l.fim++;
            l.vetor[l.fim] = dado;
        }else{
            int i;
            for(i=l.fim; i>=posicao; i--){
                l.vetor[i+1]=l.vetor[i]
            }
            l.vetor[posicao] = dado;
            l.fim++;
        }
    }else{
        printf("cheia boy");
    }
}

void imprimir(){
    if(!verificarVazia()){
        int i;
        for (i = 0; i <= l.fim; i++) {
            printf("  %d", l.vetor[i]);
        }
    }else{
        printf("lista vazia");
    }
}

int remover(int posicao){
    if(!verificarVazia()){
        if (posicao<=l.fim){
            int aux = l.vetor[posicao];
            int i;
            for(i = posicao; i < l.fim; i++){
                l.vetor[i] = l.vetor[i+1];
            }
            l.fim--;
            return aux;
        }else{
            printf("nao ha elementos na posicao informada");
        }
    }else{
        printf("eh boy lista ta vazia");
    }
    return  0;
}





















