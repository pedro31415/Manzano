#include <stdio.h>
#include <locale.h>
#define TAM 10

//Estudo de ponteiros

void teste(int vetor[], int tamanho){
  int i;
  for(i=0; i<tamanho; i++){
    vetor[i] *= 2;
  }
}

void imprimirVet(int vet[], int tamanho){
      int i;
      for(i=0; i<tamanho; i++){
        printf("%d ", vet[i]);
      }
      printf("\n");
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int vet[TAM] = {1,2,3,4,5,6,7,8,9,10};
    imprimirVet(vet,TAM);
    teste(vet,TAM);
    imprimirVet(vet,TAM);

    return 0;
}