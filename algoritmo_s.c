#include <stdio.h>
#include <locale.h>

float adicao(float x, float y){
    return x+y;
}
float sub(float x, float y){
    return x-y;
}
float mult(float x, float y){
    return x*y;
}
float div(float x, float y){
    return x/y;
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    float x,y;
    printf("Informe os dois valores: ");
    scanf("%f%f", &x,&y);
    float b = adicao(x,y);
    float c = sub(x,y);
    float d = mult(x,y);
    float e = div(x,y);
    printf("O valor: %.2f", b);
    printf("O valor: %.2f", c);
    printf("O valor: %.2f", d);
    printf("O valor: %.2f", e);

    return 0;
}