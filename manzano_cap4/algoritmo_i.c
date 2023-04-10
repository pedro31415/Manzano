#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int a,b,c,d,e; 
    int maior = 0;
    int menor = 0;
    printf("Informe os valores: ");
    scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);
    maior = a;
    menor = a;
    if(maior<b){
       maior=b;
    }
    if(maior<c){
        maior=c;
    }
    if(maior<d){
        maior=d;
    }
    if(maior<e){
        maior=e;
    }
    if(menor>b){
        menor = b;
    }
    if(menor>c){
        menor=c;
    }
    if(menor>d){
        menor=d;
    }
    if(menor>e){
        menor=e;
    }
    printf("Os valores: %d,%d,%d,%d,%d\nMaior: %d\nMenor: %d", a,b,c,d,e,maior,menor);

    return 0;
}