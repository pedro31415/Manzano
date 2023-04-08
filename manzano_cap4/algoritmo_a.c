#include <stdio.h>
#include <locale.h>

int main(){
     setlocale(LC_ALL, "Portuguese");
     int x,y,r;
     printf("Informe o primeiro valor: ");
     scanf("%d", &x);
     printf("Informe o segundo valor: ");
     scanf("%d", &y);
     if(x>y){
        r = x-y;
        printf("O resultado: %d", r);
     } else {
        r = y-x;
        printf("O resultado: %d", r);
     }

    return 0;
}