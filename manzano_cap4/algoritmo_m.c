#include <stdio.h>
#include <locale.h>


void pessoa(char *nome, char sexo){
   switch (sexo){
     case 'M':
     printf("seja bem-vindo, llmo. Sr \n%s", nome);
     break;

     case 'F':
     printf("Seja bem-vinda, llma.sr \n%s", nome);
     break;

     default:
     printf("Sexo informado, inválido");
   }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    char s,nome[60];
    printf("Informe o seu nome: ");
    scanf("%s", nome);
    printf("Informe seu sexo(M: masculino e F:feminino): ");
    scanf("%s", &s);
    pessoa(nome,s);

    return 0;
}