#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int a;
    printf("Informe o valor: ");
    scanf("%d", &a);
    if(a%2 == 0){
        printf("O valor %d é par", a);
    } else {
        printf("O valor %d é ímpar", a);
    }

    return 0;
}