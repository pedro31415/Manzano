#include  <stdio.h>
#include <locale.h>

void contadorImpares(){
    int i;
    for(i=0; i<=20; i++){
        if(!(i%2 == 0)){
            printf("O valor: %d\n", i);
        }
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    contadorImpares();
    
    return 0;
}