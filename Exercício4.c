#include <stdio.h>
#include <stdlib.h>

int main()
{
int valor1;
int valor2;
float soma,media,produto;
int menorValor,maiorValor;

printf("Digite o primeiro valor:");
scanf("%i",&valor1);

printf("Digite o segundo valor:");
scanf("%i",&valor2);


if (valor1 >= menorValor){
    menorValor = valor1;
}else{
    maiorValor = valor1;
}

if (valor2 <= menorValor){
    menorValor = valor2;
}else{
    maiorValor = valor2;
}



produto = (valor1 * valor2);
soma = (valor1 + valor2);
media = soma/2;

printf("MEDIA: %f\n",media);
printf("SOMA: %f\n",soma);
printf("PRODUTO: %f\n",produto);
printf("MAIOR VALOR: %d\n",maiorValor);
printf("MENOR VALOR: %d\n",menorValor);

return 0;

}
