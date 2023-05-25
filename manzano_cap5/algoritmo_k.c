#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    double x = 2;
    double summation = 0;
    int i;
    for(i=1; i<63; i++){
       x *= 2;
       summation += x;
       printf("The value: %.2lf\n", summation);
    }
    

    return 0;
}