#include <stdio.h>
#include <locale.h>
#define TAM 4


int main(){
    setlocale(LC_ALL, "Portuguese");
    float nota[TAM];
    float r = 0;
    float media = 0;
    float rec, media2=0;
    printf("Informe as quatros notas do aluno: ");
    for(int i = 0; i<TAM; i++){
        scanf("%f", &nota[i]);
        r += nota[i];
    }
    media = r/4;
    printf("Sua media: %.2f\n", media);
    if(media>=7){
        printf("Aluno aprovado!!!");
        return 0;
    }
    printf("Faça a prova de recuperação: ");
    scanf("%f", &rec);
    media2 = (media+rec)/2;
    if(media2 >= 5){
        printf("Aluno aprovado sobre media: %.2f", media2);
    } else {
        printf("Aluno reprovado!!!");
    }

    return 0;
}