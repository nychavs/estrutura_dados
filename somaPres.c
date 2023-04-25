#include <stdio.h>

int soma_pares(int qtd_pares, int num, int soma){
    if (qtd_pares > 100){
        return soma;
    }
    if (num % 2 == 0){
        qtd_pares += 1;
        soma += num;
    }
    num += 1;
    return soma_pares(qtd_pares, num, soma);
    
}

int main(){
    int resultado = soma_pares(0, 0, 0);
    printf("%d", resultado);
}