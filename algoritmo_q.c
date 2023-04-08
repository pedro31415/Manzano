#include <stdio.h>
#include <locale.h>

float areaCirculo(float raio, const float pi){
    return raio*raio*pi;
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    const float pi = 3.141516;
    float r;
    printf("Bem-vindo ao programa para calcular á área do círculo\n\n");
    printf("Informe o raio da circunferência: ");
    scanf("%f", &r);
    if(r<0){
        printf("Valor inválido!!!");
    } else {
       float area = areaCirculo(r,pi);
       printf("A area em (m): %.2f", area);
    }

   return 0;
}