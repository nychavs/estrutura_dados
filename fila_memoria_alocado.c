#include <stdio.h>
#include <stdlib.h>

typedef struct _no{
    int dado;
    struct _no *proximo;
}no;

typedef struct _fila{
    struct _no *inicio, *fim;
}fila;

fila f1;

void inicializar(){
    f1.inicio = NULL;
    f1.fim = NULL;
}

int verificaVazia(){
    if (f1.inicio == NULL){
        return 1;
    }else{
        return 0;
    }
}

void inserir(int dadoUsuario){
    //alocando
    no *novoNo =  (no * )malloc(sizeof(no));
    if (novoNo != NULL){
        novoNo->dado = dadoUsuario;
        novoNo->proximo = NULL;
        if (verificaVazia()){
            f1.inicio = novoNo;
        }else{
            f1.fim -> proximo = novoNo;
        }
            f1.fim = novoNo;
    }else{
        printf("no podemos mas");
    }
}

int remover(){
    if (!verificaVazia()){
        no *aux = NULL;
        int dado;
        aux = f1.inicio;
        dado = aux->dado;
        f1.inicio = aux->proximo;
        if (f1.inicio == NULL)[
            f1.fim == NULL;
        }
        free(aux);
        return dado;
    }else{
        printf("ta vazia");
    }
    
}

void imprimir(){
    if (!verificaVazia()){
        no *aux;
        aux = f1.inicio;
        while (aux != NULL){
            printf("| %d |", aux->dado);
            aux = aux->proximo;
        }
    }else{
        printf("ta vazia");
    }
}

int main(){
    inserir(7);
    inserir(2);
    imprimir();
    remover();
    printf("\n");
    imprimir();
    remover();
    printf("\n");
    imprimir();
    
    return 0;
}
