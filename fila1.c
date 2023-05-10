/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define tam_max 5

typedef struct _fila{
    int vetor[tam_max];
    int fim;
} fila;

fila f1;

void inicializar(){
    f1.fim = -1;
}

int verificarVazia(){
    if (f1.fim == -1){
        return 1;
    } else {
        return 0;
    }
}

int verificarCheia(){
    if (f1.fim == tam_max -1){
        return 1;
    } else{
        return 0;
    }
}

void inserir(int dado){
    if (!verificarCheia()){
        f1.fim++;
        f1.vetor[f1.fim] = dado;
    }else{
        printf("eita que ta cheio");
    }
}

void imprimir(){
    if (!verificarVazia()){
        int i;
        for (i = 0; i <= f1.fim; i++) {
            printf("%d \t", f1.vetor[i]);
        }
    }
}

int remover(int dado){
    if (!verificarVazia()){
        int aux = f1.vetor[0];
        for (i = 0; i <= f1.fim-1; i++) {
            f1.vetor[i] = f1.vetor[i+1];
        }
        f1.fim --;
        return aux;
    }else{
        printf("ta vazia");
    }
}


int main()
{
    inicializar();
    inserir(5);
    inserir(8);
    imprimir();

    return 0;
}
