#include <stdio.h>
#include <stdlib.h>

int main(){

int valor1,valor2,menorValor,maiorValor;
float media,soma,produto;

printf("Digite o primeiro valor:");
scanf("%d",&valor1);
printf("Digite o segundo valor:");
scanf("%d",&valor2);

soma = (valor1+valor2);
produto = (valor1*valor2);
media = soma/2;
                                                           
if (valor1 > maiorValor){
    maiorValor = valor1;                              
}else{
    maiorValor = valor2;
}
                         
if (valor2 < menorValor){
    menorValor = valor2;
}else{
    menorValor = valor1;            
}

if (valor1 == valor2) {
    printf("Os valores sao iguais!\n");
}

printf("VALOR1: %d\n",valor1);
printf("VALOR2: %d\n",valor2);             
printf("MEDIA: %f\n",media);
printf("SOMA: %f\n",soma);
printf("PRODUTO: %f\n",produto);
printf("MENOR VALOR: %d\n",menorValor);
printf("MAIOR VALOR: %d\n",maiorValor);

return 0;










}
