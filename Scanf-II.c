
#include <stdio.h>
#include <stdlib.h>

int main(){
//variáveis

int idade;
//Solicitando informações para o usuário

printf("Digite a sua idade:");
scanf("%d",&idade);

system("cls"); //LIMPATELA NO WINDOWNS

// Mostrando informações para o usuário.
printf("Sua idade e: %d\n",idade);


if (idade >= 18){
    printf("Maior de idade.\n");
} else {
    printf("Menor de idade.\n");
}

system ("PAUSE");


return 0;

}