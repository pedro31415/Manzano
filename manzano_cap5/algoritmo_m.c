#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    double num,media;
    double soma = 0;
    for(int i = 0; i<10; i++){
        printf("Forneça 10 valores: ");
        scanf("%lf", &num);
        soma += num;
    }
    media = soma/10;
    printf("The value: %.2lf", media);

    return 0;
}