#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float r,v,l;
    printf("informe o raio da lata de óleo e a altura: ");
    scanf("%f %f", &r, &l);
    if(r<=0 && l<=0){
        printf("o valor informado é invalido\n");
    } else {
        v = 3.141519*r*r*l;
        printf("O volume da lata de oleo: %.2f", v);
    }

    return 0;
}