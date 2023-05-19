#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int x = 1;
    int y = 0;
    int proxtermo;
    for(int i=0; i<15; i++){
       printf("%d ", y);
       proxtermo  = x+y;
       y = x;
       x = proxtermo;
    }
    
    return 0;
}