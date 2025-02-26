#include <stdio.h>

int main(){
int idade, matricula;
float altura;

printf("digite a sua idade: \n");
scanf("%d", &idade);

printf("digite sua autura: \n");
scanf("%f", &altura);

printf("digite sua matricula \n");
scanf("%d", &matricula);

printf("nome do aluno: %s - matricula: %d", matricula);
printf("Idade: %d - Altura: %f", idade, altura);

return 0;

}