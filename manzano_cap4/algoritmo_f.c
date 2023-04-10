#include <stdio.h>
#include <locale.h>
#define TAM 3


void listar(int *valor, int tamanho){
    printf("-----------lISTA DE ORDENAÇÃO----------------\n");
    for(int i=0; i<tamanho; i++){
        printf("%d ", valor[i]);
    }
    printf("\n\n");
}

void selectionSort(int *valor, int tamanho){
    int i,j,aux = 0;
    for(i=0; i<tamanho-1; i++){
        for(j=i+1; j< tamanho; j++){
            if(valor[j]<valor[i]){
                aux = valor[i];
                valor[i] = valor[j];
                valor[j] = aux;
            }
        }
    }
}


int main(){
     int num[TAM];
     setlocale(LC_ALL, "Portuguese");
     printf("Informe os valores: ");
     for(int i = 0; i<TAM;  i++){
        scanf("%d", &num[i]);
     }
     listar(num,TAM);
     selectionSort(num,TAM);
     listar(num,TAM);

    return 0;
}