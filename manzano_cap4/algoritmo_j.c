#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int a;
    printf("Informe o valor: ");
    scanf("%d", &a);
    if(a%2 == 0){
        printf("O valor %d � par", a);
    } else {
        printf("O valor %d � �mpar", a);
    }

    return 0;
}