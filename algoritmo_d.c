#include <stdio.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "Portuguese");
  float v,t,d,c;
  printf("informe a velocidade do automóvel e o tempo gasto percorrido: ");
  scanf("%f %f, &v, &t);      
  d = v*t;
  c = d/12;
  
  printf("A quantidade de litros gatos de combustível a cada 12km percorridos é %.2f", c);
  
 return 0; 
}
