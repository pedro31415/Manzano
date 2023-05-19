#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i;
    double x = 3;
    double result = 1;
    for(i=0; i<=15; i++){
       printf("The result: %lf\n", result);
       result *= x;
    }

    return 0;
}