#include <stdio.h>

int main(){
    float c,f;
    printf("Informe o valor de celsius para conversão em  Fahrenheit ");
    scanf("%f", &c);
    f = (9*c + 160)/2;

    printf("o valor convertido %.2f, é igual: %.2f", c,f);

    return 0;
}