#include <stdio.h>
#define tam_max 5

typedef struct _pilha{
    int vetor[tam_max];
    int topo;
} pilha;

pilha p1;

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

void push(int dado){
    if (!verificarCheia()){
        if (verificarVazia() || ((dado + p1.vetor[p1.topo]) <= 100)){
            p1.topo ++;
            p1.vetor[p1.topo] = dado;
        }
        else{
            printf("a soma eh superior a 100");
        }
   
    }else{
        printf("ta cheia");
    }
}


void imprimir(){
    if (!verificarVazia()){
        int i;
        for (i = p1.topo; i >= 0; i--) {
            printf(" total: %d", p1.vetor[i]);
        }
    }
    else{
        printf("pilha esta vazia!");
    }
}

int pop(){
    if (!verificarVazia()){
        int aux;
        aux = p1.vetor[p1.topo];
        p1.topo --;
        return aux;
    }
    else{
        printf("pilha esta vazia!");
    }
}

int main(){
    inicializar();
    push(10);
    push(100);
    imprimir();
    
}