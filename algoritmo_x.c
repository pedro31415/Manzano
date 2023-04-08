#include <stdio.h>
#include <locale.h>
#include <math.h>

void raiz(int x){
   int result = sqrt(x);
   printf("The result: %d", result);
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int x;
    do{
        printf("Informe o valor da base: ");
        scanf("%d", &x);
        
        if(x<0){
            printf("O valor é inválido\n");
        }
    } while(x<0);
    raiz(x);
    
    return 0;
}