#include <stdio.h>

int main()
{// Inicio
   // Variáveis
   // int -> inteiro
   // float -> real
   // char -> caracter  (apenas para 1 letra)
   // char[] -> caracter (para 1 cadeia de letras)
   // Igual ==
   // Diferente !=

   //int idade = 10;
   //float peso = 50.5;
   //char nome[10] = "Marta";
   //char sexo = 'F';

    int idade;
    float peso;
    char nome[50];
    char sexo[20];

    printf("Digite sua idade:\n");
    scanf("%d",&idade);
    printf("Idade: %i\n", idade); // escreval

    printf("Digite o seu peso: \n");
    scanf("%f",&peso);
    printf("Peso: %f\n", peso);

    printf("Digite o seu nome:\n");
    scanf("%s",&nome);
    printf("Nome: %s\n", nome);

    printf("Digite o sexo:\n");
    scanf("%s",&sexo);
    printf("Sexo: %s\n", sexo);











    //printf("Idade: %d\n", idade); //escreval
    //printf("Peso: %.2f\n", peso); // escreval
    //printf("Nome: %s\n", nome); // escreval
    //printf("Sexo: %c\n", sexo); // escreval

    return 0;
}