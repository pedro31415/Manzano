#include <stdio.h>
#include <locale.h>

//Função para converter os graus em Fahrenheit de 10 em 10 graus
void conversaoF(){
    float f;
    float c = 10;
    for(int i = 0; i<10; i++){
        f = (9*c+160)/5;
        printf("Valor da convers�o: %.2f\n", f);
        c += 10;  
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    conversaoF();

    return 0;
}