#include <stdio.h>

int main () {

    int numero;
    int retorno;

    printf("Escolha um numero: ");
    retorno = scanf("%d", &numero);

    printf("scanf retornou: %d\n", retorno);
    printf("numero: %d\n", numero);

    return;
}