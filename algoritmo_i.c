#include <stdio.h>
#include <locale.h>
#include <math.h>

double quadradoNumero(double num){
    double v;
    v = pow(num,2);

    return v;
}

int main(){
    double x,result;
    printf("Informe o valor x para ver o x^2: ");
    scanf("%lf", &x);
    result = quadradoNumero(x);
    printf("O resultado de %.2lf = %.2lf", x,result);

    return;
}