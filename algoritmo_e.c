#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    double v,t,tf,p;
    printf("O valor da prestação, a taxa do valor e o tempo de atraso: ");
    scanf("%lf%lf%lf", &v,&t,&tf);
    p = v +(v*(t/100)*tf);
    printf("A prestação de atraso: %.2lf", p);
    
    return 0;
}