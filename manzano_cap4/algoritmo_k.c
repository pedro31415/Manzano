#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("Informe o valor: ");
    scanf("%d", &num);
    if(num>=1 && num<=9){
        printf("O valor: %d\nEst� na faxa entre 1 a 9", num);
    } else {
        printf("N�o est� na faxa entre 1 a 9");
    }

    return 0;
}