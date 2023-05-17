#include <stdio.h>
#include <stdlib.h>

int main()
{ // inicio

    int valor;

    printf("Digite o valor:");
    scanf("%d", &valor);

    system("cls");

    printf("O valor e: %d\n", valor);

    if (valor == 10)
    {

        printf("E IGUAL A 10!.\n");
    }

    else if (valor > 10)
    {

        printf("E MAIOR QUE 10!.\n");
    }
    else
        printf("E MENOR QUE 10!.\n");
    {
    }

    return 0;
}

// fimalgoritmo