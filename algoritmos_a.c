#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    float c,f;
    printf("Informe o valor de celsius para convers�o em  Fahrenheit: ");
    scanf("%f", &c);
    f = (9*c + 160)/5;

    printf("o valor convertido %.2f, � a igual: %.2f", c,f);

    return 0;
}