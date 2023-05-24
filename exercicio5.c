#include <stdio.h>
#include <stdlib.h>

int main(){

float valor1,valor2,menorValor,maiorValor;
float media,soma,produto;

printf("Digite o primeiro valor:");
scanf("%f",&valor1);
printf("Digite o segundo valor:");
scanf("%f",&valor2);

soma = (valor1+valor2);
produto = (valor1*valor2);
media = soma/2;
                                                           
if (valor1 > valor2){
    maiorValor = valor1;                              
    menorValor = valor2;
} else {
    maiorValor = valor2;
    menorValor = valor1;            
}
                      
if (valor1 == valor2) {
    printf("Os valores sao iguais!\n");
}

printf("VALOR1: %.2f\n",valor1);
printf("VALOR2: %.2f\n",valor2);             
printf("MEDIA: %.2f\n",media);
printf("SOMA: %.2f\n",soma);
printf("PRODUTO: %.2f\n",produto);
printf("MENOR VALOR: %.2f\n",menorValor);
printf("MAIOR VALOR: %.2f\n",maiorValor);

return 0;










}