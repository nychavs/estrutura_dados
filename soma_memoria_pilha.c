#include <stdio.h>
#include <stdlib.h>

typedef struct _no{
    int dado;
    struct _no *proximo;
} no;

typedef struct _pilha{
    no *topo;
} pilha;

pilha p;

void inicializar(){
    p.topo = NULL;
}

int verificaVazia(){
    if (p.topo == NULL){
        return 1;
    } else{
        return 0;
    }
}
void imprimir(){
    if (!verificaVazia()){
    no *aux = NULL;
    aux = p.topo;
        while(aux != NULL){
            printf("%d\n", aux->dado);
            aux = aux->proximo;
        }
    }else{
        printf("pilha vazia");
    }
}

void push(int dado){
    no *novoNoh = (no*)malloc(sizeof(no));
    if (novoNoh != NULL) {
        novoNoh->dado = dado;
        novoNoh->proximo = p.topo;
        p.topo = novoNoh;
    }else{
        printf("memoria cheia!");
    }
}

int pop(){
    if(!verificaVazia()){
        no *aux = NULL;
        int dado;
        aux = p.topo;
        dado = aux->dado;
        p.topo = aux->proximo;
        free(aux);
        return dado;
    }else{
        printf("esta vazia");
    }
}

int soma(){
    if (!verificaVazia()){
        int soma = 0;
        no *aux = NULL;
        aux = p.topo;
        while(aux != NULL){
           soma = soma + aux->dado;
        } return soma;
    }else{
        printf("pilha vazia");
    }
}

int main()
{
    push(5);
    push(7);
    push(1);
    imprimir();
    pop();
    printf("pop\n");
    imprimir();
    soma();
    return 0;
}
