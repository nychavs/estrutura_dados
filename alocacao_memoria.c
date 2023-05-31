/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

//alocação de memoria dinamica
int main()
{
    int *p = NULL;
    // coloca no parenteses o tipo de dado do seu ponteiro
    // no malloc coloca a qtd de bytes que o tipo ocupa
    p = (int *) malloc(4);
    // ou usa sizeof() pra calcular a qtd de bytes
    p = (int *) malloc(sizeof(int));

    // vai guardar o numero 6 nessa memoria alocada
    *p = 6;
    printf("dado da area alocada: %d", *p);
    *(p+1) = 7;
    printf("\ndado da area alocada: %d", *(p+1));
    
    // para liberar o espaço de memoria alocado usar free
    free(p);

    return 0;
}
