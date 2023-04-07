#include <stdio.h>
#include <locale.h>
#include <math.h>

int quadradoDaSoma(int *valor){
    int result = 0,z;
    for(int i=0; i<3; i++){
        result += valor[i];
    }
    z = pow(result,2);

  return z;
}

int main(){
    int num[3], r;
    setlocale(LC_ALL, "Portuguese");
    printf("Informe o valor: ");
    for(int i = 0; i<3; i++){
        scanf("%d", &num[i]);
    }
    r = quadradoDaSoma(num);
    printf("o valor do quadrado da soma dos três números (%d + %d + %d)^2 = %d", num[0], num[1], num[2], r);
     
    return 0;
}