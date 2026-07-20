#include <stdio.h>
#define DOLAR 5.11

// MENUS DO SISTEMA 
void menuPrincipal (){

    printf("=========================================\n");
    printf("           CONVERSOR-UNIVERSAL           \n");
    printf("=========================================\n");
    printf(" 1. Conversão de Distância (Km/Milhas)  \n");
    printf(" 2. Conversão de Temperatura (C°/F°)    \n");
    printf(" 3. Conversão de Moedas (Real/Dolar)    \n");
    printf(" --------------------------------------- \n");
    printf(" 0. Sair do Programa                     \n");
    printf("=========================================\n");
    printf(" Escolha uma opção: ");

}
void menuDistancia (){

    printf("===== DISTANCIA =====\n");
    printf("--- Km <-> Milhas ---\n");

    printf("1 - Km -> Milhas\n ");
    printf("2 - Milhas -> Km\n");
    printf("3 - Voltar ao Menu Principal\n");

}
void menuTemperatura (){

    printf("===== TEMPERATURA =====\n");
    printf("--- Celsius <-> Fahrenheit ---\n");

    printf("1 - Celsius -> Fahrenheit\n");
    printf("2 - Fahrenheit -> Celsius\n");
    printf("3 - Voltar ao Menu Principal\n");

}
void menuMoedas (){

    printf("===== MOEDAS =====\n");
    printf("--- Real <-> Dolar ---\n");

    printf("1 - Real -> Dolar\n");
    printf("2 - Dolar -> Real\n");
    printf("3 - Voltar ao Menu Principal\n");

}

// CONVERSOES
float celsiusParaFahrenheit(float c){

    return (c * 9/5) + 32;
}

float fahrenheitParaCelsius(float f){

    return (f - 32) * 5/9;
}

float kmParaMilhas(float km){

    return km * 0.621371;
}

float milhasParaKm(float milhas){

    return milhas / 0.621371;
}

float realParaDolar(float real){

    return real / DOLAR;
}

float dolarParaReal(float dolar){

    return dolar * DOLAR;
}

// MAIN
int main () {

    int opcao;

    menuPrincipal();
    scanf("%d", &opcao);

    switch (opcao){
    case 1 :
        menuDistancia();
        break;
    
    case 2 :
        menuTemperatura();
        break;
    
    case 3 :
        menuMoedas();
        break;

    case 0 :
        printf("Saindo...");
        break;
    
    default:
    printf("Opcao invalida");
    break;
}

return 0;

}