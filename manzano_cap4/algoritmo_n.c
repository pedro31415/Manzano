#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num[3];
    int soma = 0;
    printf("Informe três valores: ");
    for(int i=0; i<3; i++){
        scanf("%d", &num[i]);
        soma += num[i];
    }
    if(soma >= 100){
        printf("valor: %d", soma);
    }

    return 0;
}