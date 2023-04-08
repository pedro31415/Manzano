#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int x;
    printf("Informe o valor: ");
    scanf("%d", &x);
    if(x<0){
        x = x*(-1);
        printf("O resultado: %d", x);
    }
     printf("O resultado: %d", x);

    return 0;
}