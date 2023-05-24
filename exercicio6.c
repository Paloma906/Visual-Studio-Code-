#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Elabore um algoritmo para receber o login e a senha de um usuário. 
//Caso o usuário e a senha estejam corretos, mostre a mensagem "Bem-vindo!", caso contrário,
// mostre a mensagem "Login ou senha inválidos." 

int main(){

    char login[50];
    char senha[50];
    char loginSalvo[50] = "paloma";
    char senhaSalvo[50] = "estudar";

    printf("Digite o seu login: ");
    gets(login);

    printf("Digite a sua senha: ");
    gets(senha);

    if (strcmp(login,loginSalvo)==0 && strcmp(senha,senhaSalvo ) ==0){
        printf("Seja bem-vindo!");
    } else{
        printf("Login ou senha invalidos.");
    }

    return 0;
}