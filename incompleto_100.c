/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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

int verificarSoma(){
    int i;
    int soma = 0;
    for (i = p1.topo; i >= 0; i--) {
        soma += p1.vetor[i];
    }
    if (soma > 100){
        return 1;
    }else{
        return 0;
    }
}

void push(int dado){
    if (verificarVazia() == 0){
        if (verificarSoma() == 0){
            p1.topo ++;
            p1.vetor[p1.topo] = dado;
        }
        else{
            printf("a soma eh superior a 100");
        }
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
    imprimir();
    
}
















