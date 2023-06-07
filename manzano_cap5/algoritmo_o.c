#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i=1;
    for(i=1; i<=10; i++){
        if(!(i%2 == 0)){
             int fat = 1;
             for(int j=1; j<=i; j++){
              fat *= j;
             }
             printf("O fatorial de %d = %d\n", i,fat);
       }
   }   
    return 0;
}