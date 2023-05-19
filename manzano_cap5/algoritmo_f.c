#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i;
    for(i=1; i<=200; i++){
        if(i%4 == 0){
            printf("O valor %d é divisivel por 4\n", i);
        }
    }

    return 0;
}