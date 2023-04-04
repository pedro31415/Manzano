#include <stdio.h>
#include <locale.h>

void conversaoDolarReal(double *dolar){
    *dolar = *dolar * 5.06; 

}

int main(){
    double x;
    setlocale(LC_ALL, "Portuguese");
    printf("informe o valor (reais), para conversão em dolar: ");
    scanf("%lf", &x);
    conversaoDolarReal(&x);
    printf("O valor da conversão: %.2lf", x);

    return 0;
}