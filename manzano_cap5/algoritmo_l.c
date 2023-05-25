#include <stdio.h>
#include <locale.h>
#define TAM 15

void factorial(double x){
    double fat = 1;
     for(int i=1; i<=x; i++){
       fat *= i;
    }
    printf("O fatorial dê %.2lf! = %.2lf", x,fat);
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    double num[TAM];
    double summation = 0;
    for(int i=0; i<TAM; i++){
       printf("Informe 15 valores: \n");
       scanf("%lf", &num[i]);
       summation += num[i];
    }
    factorial(summation);
   
    return 0;
}