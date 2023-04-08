#include <stdio.h>
#include <locale.h>
#define TAM 4

int main(){
    setlocale(LC_ALL, "Portuguese");
    float num[TAM];
    float result = 0;
    float media = 0;
    printf("Informe as 4 notas do aluno: ");
    for(int i=0; i<TAM; i++){
        scanf("%f", &num[i]);
        result += num[i];
    }
    media = result/4;
    if(media >= 5)
    {
        printf("Aprovado!!!");
    } 
    else
    {
      printf("Reprovado!!!");
    }

    return 0;
}