#include <stdio.h>

int main () {

    char texto[100];
    int valor;

    fgets(texto, sizeof(texto), stdin);

    int retorno = sscanf(texto, "%d", &valor);

    printf("Retorno = %d\n", retorno);
    printf("Valor = %d\n", valor);
    printf("Texto = %s", texto);
}