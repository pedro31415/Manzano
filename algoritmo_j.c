#include <stdio.h>
#include <locale.h>

int quadradoDiferenca(int valor1, int valor2){
    int r;
    r = (valor1*valor1) - 2*valor1*valor2 + (valor2*valor2);

  return r;
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int x,y,result;
    printf("informe dois valores: ");
    scanf("%d%d", &x,&y);
    result = quadradoDiferenca(x,y);
    printf("O quadrado da diferença de %d com %d é %d", x,y,result);

    return 0;
}