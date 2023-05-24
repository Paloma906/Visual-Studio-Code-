#include <stdio.h>
#include <stdlib.h>

//Elabore um algoritmo usando operações lógicas para informar se uma pessoa é obrigada a votar. 
//Considere que a regra é que menores de 18 e maiores que 65 não são obrigados a votar. 


int main(){

float idade;

printf("Digite a idade\n ");
scanf("%f",&idade);

if ((idade < 18) || (idade > 65)){
    printf("Nao e obrigado a votar!");
}else{
    printf("e obrigado a votar!");
}


return 0;
}
