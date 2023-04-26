/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define tam_max 5


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
            printf("%d", p1.vetor[i]);
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
    inicializar();
    push(caixa);
    imprimir();
    pop();
}
















