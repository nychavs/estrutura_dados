/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

//passagem por valor só altera dentro da função (int p como parametro)
//passagem por referencia altera a variavel dentro e fora (int *p como parametro)

int funcao1(int p){
    p = p + 1;
    printf("\nfuncao 1 : p = %d", p);
}

int funcao2(int *p){
    *p = *p + 3;
    printf("\nfuncao 1 : p = %d", *p);
}

void troca(int *p1, int *p2){
    // * = onde esta apontando
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
    int x, y;
    x = 1;
    y = 2;
    //passando valor - vai mudar só na função
    funcao1(x);
    printf("\nx = %d, y = %d", x, y);
    //passando referencia - muda dentro e fora
    funcao2(&x);
    printf("\nx = %d, y = %d", x, y);
    // & = endereço 
    troca(&x, &y);
    printf("\nvalores depois da troca: x = %d e y = %d", x, y);

    return 0;
}
