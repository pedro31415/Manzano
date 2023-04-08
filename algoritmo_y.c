#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int x,suc,ant;
    printf("Informe um número: ");
    scanf("%d", &x);
    suc = x+1;
    ant = x-1;
    printf("O sucessor: %d\n", suc);
    printf("O antecesssor: %d\n", ant);

    return 0;
}