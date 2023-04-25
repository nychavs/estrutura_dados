#include <stdio.h>

int divide_num(int num, int den, int soma){
    if (num == 1 && den == 1){
        return soma;
    }
    else{
        int fracao = (num/den);
        soma = fracao + soma;
        return divide_num(num-2, den-1, soma);
    }
    
}

int main(){
    int resultado = divide_num(99, 50, 0);
    printf("%d", resultado);
}