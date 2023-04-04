#include <stdio.h>
#include <locale.h>
#include <math.h>
#define TAM 3

int somaQuadrado(int *valor, int tamanho){
   int r = 0;
   for(int i=0; i<TAM; i++){
      r = r + valor[i];
   }
   r = pow(r,2);
   
   return r;
}

int main(){
    int v[TAM];
    setlocale(LC_ALL, "Portuguese");
    printf("Informe três valores: ");
    for(int i = 0; i<TAM; i++){
        scanf("%d", &v[i]);
    }
    int result = somaQuadrado(v,TAM);
    printf("O resultado: %d", result);

    return 0;
}