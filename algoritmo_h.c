#include <stdio.h>
#include <locale.h>

void areaCaixa(double *comprimento, double largura, double altura){
    *comprimento = *(comprimento)*largura*altura;
}


int main(){
    double c,l,a;
    setlocale(LC_ALL, "Portuguese");
    printf("Informe o comprimento da caixa: ");
    scanf("%lf", &c);
    printf("Informe a largura da caixa: ");
    scanf("%lf", &l);
    printf("Informe a altura da caixa: ");
    scanf("%lf", &a);
    areaCaixa(&c,l,a);
    printf("O volume da caixa é %.2lf", c);

    return 0;
}