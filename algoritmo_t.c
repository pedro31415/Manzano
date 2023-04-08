#include <stdio.h>
#include <locale.h>

void calcularV(float *metros, float segundos){
    *metros = (*metros*1000)/(segundos*60);
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    float m,t;
    printf("\tCalculo da velocidade(km/h)\n");
    printf("Informe o valor em (m): \n");
    scanf("%f", &m);
    printf("Informe os valores em segundos(s): \n");
    scanf("%f", &t);
    calcularV(&m, t);
    printf("O valor da velocidade em km/h: %.2f", m);


    return 0;
}