#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float dividendo,divisor;
    int quociente = 0;
    printf("Informe o dividendo: ");
    scanf("%f", &dividendo);
    printf("Informe o divisor: ");
    scanf("%f", &divisor);
    while(dividendo>=divisor){
        dividendo -= divisor;
        quociente++;

    }
    printf("o Quociente: %d", quociente);

    return 0;
}