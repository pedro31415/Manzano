#include <stdio.h>
#include <locale.h>
#include <math.h>


float bhaskara(float a, float b, float c){
    float result;
    result = (b*b) - 4*a*c;
    return result;
}

void delta(float a, float b, float bhaskara_result){
    float x1,x2,valor;
    valor = sqrt(bhaskara_result);
    printf("O valor: %.2f", valor);
    x1 = (-b + valor)/(2*a);
    x2 = (-b - valor)/(2*a);
    if(valor == 0){
        printf("Há uma soluçao real: %.2f=%.2f", x1,x2);
    }
    if(valor > 0){
        printf("Há duas soluções reais: %.2f e %.2f", x1,x2);
    } else if(valor<0){
        printf("Não há solução real");
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    float a,b,c;
    printf("Informe os valores de a,b e c da fórmula de bhaskara: ");
    scanf("%f%f%f", &a,&b,&c);
    do{
        if(a==0){
            printf("Valor inválido\n");
            printf("Informe os valores de a,b e c da fórmula de bhaskara: ");
            scanf("%f%f%f", &a,&b,&c);
        }    
    }while(a==0);
    float r = bhaskara(a,b,c);
    delta(a,b,r);

    return 0;
}