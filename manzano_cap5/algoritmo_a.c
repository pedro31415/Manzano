#include <stdio.h>
#include <locale.h>
#include <math.h>
#define TAM 200

int main(){
    int num[TAM];
    int i;
    int result = 0;
    int result2 = 0;
    for(i=0; i<TAM; i++){
        num[i] = i + 1;
    }
    for(i=15; i<TAM; i++){
       result = pow(num[i], 2);
       result2 += result;
    }
 printf("The result: %d", result2);

    return 0;
}