#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("Informe os valores: ");
    scanf("%d", &num);
    if(!(num>3)){
        printf("O valor informado %d é menor que 3", num);
    }

    return 0;
}