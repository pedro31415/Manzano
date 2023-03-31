#include <stdio.h>
#include <locale.h>
#define TAM 5

//Estudo de ponteiros
//Desafio do Canal Programe seu futuro(Wagner Gaspar)
void MaiorMenor(int vet[],int tamanho, int *maior, int *menor){
    *maior = vet[0];
    *menor = vet[0];
      for(int i = 1; i<tamanho; i++){
        if(*maior < *(vet+i)){
            *maior = *(vet+i);
        }
        if(*menor > *(vet + i)){
          *menor = *(vet + i);
        }
      }
};


int main(){
    setlocale(LC_ALL, "Portuguese");
    int vet[TAM] = {5,10,14,25,3};
    int maior,menor;
    MaiorMenor(vet,TAM,&maior,&menor);
    printf("O maior valor: %d\t e o menor: %d\n", maior,menor);
    
    return 0;
}