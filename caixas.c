#include <stdio.h>
#define tam_max 5
#include <string.h>


typedef struct _caixas{
    int identificador;
    char setor_origem[50];
    float peso;
} caixas;

typedef struct _pilha{
    caixas vetor[tam_max];
    int topo;
} pilha;

pilha p1;
caixas c1;

void inicializar(){
    p1.topo = -1;    
}

int verificarVazia(){
    if (p1.topo == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int verificarCheia(){
    if (p1.topo == tam_max){
        return 1;
    }
    else{
        return 0;
    }
}

void push(caixas c1){
    if (!verificarCheia()){
        p1.topo ++;
        p1.vetor[p1.topo] = c1;
    }
    else{
        printf("pilha esta cheia!");
    }
}

void imprimir(){
    if (!verificarVazia()){
        int i;
        for (i = p1.topo; i >= 0; i--) {
            printf("%d - %s - %f", p1.vetor[i].identificador, p1.vetor[i].setor_origem, p1.vetor[i].peso);
        }
    }
    else{
        printf("pilha esta vazia!");
    }
}

caixas pop(){
    if (!verificarVazia()){
        caixas aux;
        aux = p1.vetor[p1.topo];
        p1.topo --;
        return aux;
    }
    else{
        printf("pilha esta vazia!");
    }
}

int main(){
    caixas caixa;
    caixa.identificador = 56;
    caixa.peso = 9.9;
    caixa.setor_origem[p1.topo] = "teste";
    inicializar();
    push(caixa);
    imprimir();
    pop();
}