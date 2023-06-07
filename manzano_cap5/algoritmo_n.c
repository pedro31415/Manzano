#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    double x;
    double contador = 0;
    double media = 0;
    int i = 0;
    while(1){
         printf("Informe os valores: \n");
         scanf("%lf", &x);
         if(x>=1){
             contador += x;
             i++;
         } else {
            printf("Valor informado é negativo\n");
            break;
         }
    } 
    media = contador/i;
    printf("O somatório do valores %.2lf\nA media dos valores: %.2lf\nTotal de valores lidos: %d", contador,media,i);
    return 0;
}