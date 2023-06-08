#include <stdio.h>
#include <locale.h>
#include <limits.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int maior=__WINT_MIN__;
    int menor=__INT_MAX__;
    int x;
    while(1){
        printf("Informe um valor: ");
        scanf("%d", &x);   
        if(x<0){
            break;
        }
        if(x>maior){
            maior = x;
        } 
        if(x<menor){
            menor = x;
        }
    }
    printf("O maior valor: %d\nO menor valor: %d", maior,menor);
    return 0;
}