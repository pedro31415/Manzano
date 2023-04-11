#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int x;
    printf("informe o valor: ");
    scanf("%d", &x);
    x = x*2;
    if(x>=30){
        printf("The result: %d", x);
    }

    return 0;
}