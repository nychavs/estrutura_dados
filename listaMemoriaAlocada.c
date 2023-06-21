/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

typedef struct _no {
    int dado;
    struct _no *proximo;
} no;

typedef struct _lista{
    no *inicio; 
} lista;

lista l1;

void inicialiar(){
    l1.inicio = NULL;
}

int verificaVazia(){
    if (l1.inicio == NULL){
        return 1;
    }else{
        return 0;
    }
}

void inserir(int dado, int posicao){
    no *novoNoh = (no*) malloc(sizeof(no));
    if (novoNoh!= NULL){
        novoNoh -> dado = dado;
        novoNoh -> proximo = NULL;
        if (verificaVazia() || posicao == 1){
            novoNoh -> proximo = l1.inicio;
            l1.inicio = novoNoh;
        }else{
            no *aux = NULL;
            int posicaoNoAux;
            aux = l1.inicio;
            posicaoNoAux =1;
            while (posicaoNoAux!= posicao -1 && aux->proximo != NULL){
                aux = aux->proximo;
                posicaoNoAux++;
            }
            novoNoh->proximo = aux->proximo;
            aux->proximo = novoNoh;
        }
    }else{
        printf("me jogue aos lobos que eu voltarei ai ai ai memoria cheia");
    }
    
}

void imprimir(){
    if (!verificaVazia()){
        no *aux = NULL;
        aux = l1.inicio;
        while(aux != NULL){
            printf("%d", aux->dado);
            aux = aux->proximo;
        }
    }else{
        printf("me jogue aos lobos que eu voltarei ai ai ai lista vazia");
    }
}

int remover(int posicao){
    if (!verificaVazia()){
        no *aux = NULL;
        int dado;
        if (posicao == 1){
            aux = l1.inicio;
            l1.inicio = aux->proximo;
        }else{
            no *noAnterior = NULL;
            int posicaoNoAnterior; 
            noAnterior=l1.inicio;
            posicaoNoAnterior = 1;
            while(posicaoNoAnterior != posicao-1 && noAnterior!=NULL){
                noAnterior = noAnterior->proximo;
                posicaoNoAnterior++;
            }
            if (noAnterior == NULL){
                printf("nao tem nada nessa posicao");
            }else{
                aux = noAnterior->proximo;
                noAnterior->proximo = aux->proximo;
            }
        }
        dado = aux->dado;
        free(aux);
        return dado;
    }else{
        printf("lista vazia");
    }
}

int main(){
    inserir(2,3);
    inserir(1,3);
    inserir(4,3);
    imprimir();
    remover(3);
    remover(8);
    return 0;
}
