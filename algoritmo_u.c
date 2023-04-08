#include <stdio.h>
#include <locale.h>

void volumeEsfera(float r, float pi){
    float v;
    v = (r*r*r*pi*3)/4;
    printf("O volume da esfera é: %.2f", v);
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    float r;
    const float pi = 3.141516;
    do{
       printf("Informe o valor do raio: ");
       scanf("%f", &r);
        
    }while(r<0);
    volumeEsfera(r,pi);
    
    return 0;
}