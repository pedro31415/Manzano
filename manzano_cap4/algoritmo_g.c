#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i,j,num[4];
    printf("Informe os valores: ");
    for(i=0; i<4; i++){
        scanf("%d", &num[i]);
    }
    for(j=0; j<4; j++){
            if(num[j]%2 == 0 && num[j]%3 == 0){
                printf("O valor %d na posição %d é divisivel por 2 e 3\n", num[j], j+1);
            } else {
                printf("O valor %d na posição %d não é divivel por 2 e 3\n", num[j], j+1);
            }
        }
   
    

    return 0;
}