#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float sum = 0;
    float media = 0;
    int contador = 0;
    for(int i=50; i<=70; i++){
        if(i%2 == 0){
            sum += i;
            contador++;
        }
    }
    media = sum/contador;
    printf("MEDIA: %.2f\nSOMATÓRIO: %.2f", media,sum);
    
    return 0;
}