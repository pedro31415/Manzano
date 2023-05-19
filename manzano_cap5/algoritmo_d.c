#include <stdio.h>
#include <locale.h>

int adicaoPares(int x){
    x = 0; 
    int i;
    for(i=1; i<=500; i++){
        if(i%2 == 0){
            x += i;
        }
    }

    return x;
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    int x, resultado;
    resultado = adicaoPares(x);
    printf("O valor: %d", resultado);

    return 0;
}