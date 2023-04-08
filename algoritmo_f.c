#include <stdio.h>
#include <locale.h>

int main(){
     int a,b,aux;
     printf("informe um valor(a): ");
     scanf("%d", &a);
     printf("informe um valor(b): ");
     scanf("%d", &b);
     aux = a;
      a = b;
      b = aux;
     printf("Os valores alterados a = %d\t b=%d\n", a,b);

    return 0;
}