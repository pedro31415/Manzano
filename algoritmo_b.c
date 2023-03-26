#include <stdio.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL, "Portuguese");
    float c,f;
    printf("Informe o valor em Fahrenheit para conversão em Celsius: ");
    scanf("%f", &f);
    c = ((f-32)*5)/9;
    printf("o valor em Fahrenheit %.2f, foi convertido em Celsis para %.2f ", f,c);

    return 0;
}