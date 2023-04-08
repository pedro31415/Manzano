#include <stdio.h>
#include <locale.h>
#include <math.h>

float baseExpo(int base, int expoente){
    return pow(base, expoente);
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int x,y;
    printf("Informe o valor da base e o valor do expoente: ");
    scanf("%d%d", &x,&y);
    int result = baseExpo(x,y);
    printf("base: %d\nexpoente: %d\nresultado:%d", x,y,result);

    return 0;
}