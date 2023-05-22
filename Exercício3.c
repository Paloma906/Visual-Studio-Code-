#include <stdio.h>
#include <stdlib.h>

int main() 
{


char nome[50];
int idade;
float nota1;
float nota2;
float nota3;
float media;
float soma;
printf("Digite o nome do aluno:\n");
scanf("%s", &nome);

printf("Digite a sua idade:\n");
scanf("%d", &idade);

printf("Digite a primeira nota:\n");
scanf("%f", &nota1);

printf("Digite a segunda nota:\n");
scanf("%f", &nota2);

printf("Digite a terceira nota:\n");
scanf("%f", &nota3);

soma = (nota1 + nota2 + nota3);
media = soma/3;

if (media < 7)
{
    printf("O ALUNO ESTA REPROVADO!");
}
else {
    printf("O ALUNO ESTA APROVADO!");
}

printf("Nome: %s\n", nome);
printf("Idade: %d\n", idade);
printf("Nota 1: %f\n",nota1);
printf("Nota 2: %f\n",nota2);
printf("Nota 3: %f\n",nota3);
printf("Media: %f\n",media);

return 0;

}
