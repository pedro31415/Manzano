#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    double result = 1;
    double x,y;
    printf("Informe o valor da base e do expoente: ");
    scanf("%lf%lf", &x,&y);
    for(int i=0; i<y; i++){
        result *= x;
    }
    printf("The value: %.2lf", result);

    return 0;
}