/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _navios{
    char nome[20];
    char origem[50];
    float peso;
}navios;
    
typedef struct _no{
    navios dado;
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

void inserir(navios dadoUsuario){
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

navios remover(){
    if (!verificaVazia()){
        no *aux = NULL;
        navios dado;
        aux = f1.inicio;
        dado = aux->dado;
        f1.inicio = aux->proximo;
        if (f1.inicio == NULL){
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
            printf("| nome: %s |\n", aux->dado.nome);
            printf("| origem: %s |\n", aux->dado.origem);
            printf("| peso: %0.2f |\n", aux->dado.peso);
            aux = aux->proximo;
        }
    }else{
        printf("ta vazia");
    }
}

int main(){
    navios n;
    printf("nome do navio:");
    scanf("%s", &n.nome[20]);
    printf("origem do navio:");
    scanf("%s", &n.origem[50]);
    printf("peso do navio:");
    scanf("%f", &n.peso);

    inserir(n);
    imprimir();
    remover();
    printf("\nremovi \n");
    imprimir();
    
    return 0;
}
