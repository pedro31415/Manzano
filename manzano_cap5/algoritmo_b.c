#include <stdio.h>
#include <locale.h>

void tabuada(int num){
    int result = 0;
    for(int i=0; i<=10; i++){
        result = num*i;
        printf("%d x %d = %d\n", num,i,result);  
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("Informe um número para ver sua respectiva tabuada: ");
    scanf("%d", &num);
    tabuada(num);

    return 0;
}