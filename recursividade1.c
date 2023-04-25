// eh a func2, a func eh so pra conferir

int func(int a) {  
     if ( a <= 0 )    
           return 1;  
     else return a * func(a-1);
}


int func2(int a){
    for (int i = 0; a <= 0; i++) {
        return a * a;
    }
    
}

int main(){
    int resultado = func(5);
    int resultado2 = func2(5);
    printf("%d ", resultado);
    printf("%d", resultado2);
}