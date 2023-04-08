#include <stdio.h>
#include <locale.h>

int adicao(int x, int y){
    return x+y;
}

int multiplicacao(int x, int y){
    return x*y;
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int a,b,c,d;
    printf("Informe os valores: ");
    scanf("%d%d%d%d", &a,&b,&c,&d);
    int p = adicao(a,c);
    int s = multiplicacao(b,d);
    printf("O valor da soma:%d\n", p);
    printf("O valor da multiplicação: %d\n", s);

    return 0;
}