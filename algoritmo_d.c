#include <stdio.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "Portuguese");
  float v,t,d,c;
  printf("informe a velocidade do automóvel e o tempo gasto percorrido: ");
  scanf("%f %f", &v, &t);   
  d = v*t;
  c = d/12;
  printf("o combústivel gasto em 12km percorrido é %.2f", c);   
  
 return 0; 
}
