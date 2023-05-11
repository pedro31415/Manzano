#include <stdio.h>
#include <locale.h>

int main(){
    int num = 0;
    
    for(int i=1; i<=100; i++){
        num += i;
    }
    printf("The result: %d", num);

    return 0;
}