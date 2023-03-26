#include <stdio.h>

int main(){
    float c,f;
    printf("informe o valor(celsius) para conversão(Fahrenheit): ");
    scanf("%f", &c);
    f = (9*c + 160)/2;

    printf("o valor convertido %.2f, é igual: %.2f", c,f);

    return 0;
}