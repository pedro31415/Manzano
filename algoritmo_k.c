#include <stdio.h>
#include <locale.h>

void conversaoRealDolar(double *real){
   *real = *real * 0.20;

}

int main(){
   double x;
   setlocale(LC_ALL, "Portuguese");
   printf("Informe o valor (R$) para convers�o (US): ");
   scanf("%lf", &x);
   conversaoRealDolar(&x);
   printf("A convers�o do real para o dolar: %.2lf", x);
   
    return 0;
}