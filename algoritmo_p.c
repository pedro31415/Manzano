#include <stdio.h>
#include <locale.h>


void reajusteR(double salario, double *reajuste){
    return *reajuste = ( *reajuste*salario)/100;
}

void novoSalario(double *salario,double *reajuste){
    return *salario = (*salario)+(*reajuste);
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    double sm,rj;
    printf("Informe o s�lario mensal e a porcentagem de reajuste: ");
    scanf("%lf%lf", &sm,&rj);
    printf("O s�lario antigo: %.2lf", sm);
    reajusteR(sm,&rj);
    novoSalario(&sm,&rj);
    printf("O s�lario com reajuste: %.2lf", sm);

    return 0;
}