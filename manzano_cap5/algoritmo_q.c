#include <stdio.h>
#include <locale.h>

typedef struct{
    char nome[40];
    float comprimento,largura;
}casa;

int main(){
    casa area;
    float areaComodo = 0;
    float areaTotal = 0;
    char s;
    setlocale(LC_ALL, "Portuguese");
    while(1){
         printf("Informe o nome do comodo: \n");
         scanf("%s", area.nome);
         printf("Informe o comprimento: \n");
         scanf("%f", &area.comprimento);
         printf("Informe a largura: \n");
         scanf("%f", &area.largura);
        areaComodo = area.comprimento * area.largura;
        areaTotal += areaComodo;
         printf("Deseja continuar\n S - Sim\n N - Não: \n");
         scanf(" %c", &s);
         if((s == 'N')){
            break;
         } 
    }
    printf("A area total = %.2f", areaTotal);

    return 0;
}