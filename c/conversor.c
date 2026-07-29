#include <stdio.h>
#define DOLAR 5.11
#define KM_MILHAS 0.621371

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

    printf("\n===== DISTANCIA =====\n");
    printf("--- Km <-> Milhas ---\n");

    printf("1 - Km -> Milhas\n");
    printf("2 - Milhas -> Km\n");
    printf("3 - Voltar ao Menu Principal\n");

}
void menuTemperatura (){

    printf("\n===== TEMPERATURA =====\n");
    printf("--- Celsius <-> Fahrenheit ---\n");

    printf("1 - Celsius -> Fahrenheit\n");
    printf("2 - Fahrenheit -> Celsius\n");
    printf("3 - Voltar ao Menu Principal\n");

}
void menuMoedas (){

    printf("\n===== MOEDAS =====\n");
    printf("--- Real <-> Dolar ---\n");

    printf("1 - Real -> Dolar\n");
    printf("2 - Dolar -> Real\n");
    printf("3 - Voltar ao Menu Principal\n");

}

// VALIDACAO-SCANF-INT
int lerInteiro() {

    char texto[100];
    int valor;
    char resto;

    while (1) {

        if (fgets(texto, sizeof(texto), stdin) == NULL) {
            continue;
        }

        int retorno = sscanf(texto, "%d %c", &valor, &resto);

        if (retorno == 1) {
            return valor;
        }

        printf("Entrada inválida! Digite apenas números.\n");
    }
}

// VALIDACAO-SCANF-FLOAT
float lerFloat() {

    char texto[100];
    float valor;
    char resto;

    while (1) {

        if (fgets(texto, sizeof(texto), stdin) == NULL) {
            continue;
        }

        int retorno = sscanf(texto, "%f %c", &valor, &resto);

        if (retorno == 1) {
            return valor;
        }

        printf("Entrada inválida! Digite apenas números.\n");
    }
}

// CONVERSOES
float celsiusParaFahrenheit(float c){

    return (c * 9/5) + 32;
}

float fahrenheitParaCelsius(float f){

    return (f - 32) * 5/9;
}

float kmParaMilhas(float km){

    return km * KM_MILHAS;
}

float milhasParaKm(float milhas){

    return milhas / KM_MILHAS;
}

float realParaDolar(float real){

    return real / DOLAR;
}

float dolarParaReal(float dolar){

    return dolar * DOLAR;
}

// EXECUÇÃO DOS MENUS
void executarDistancia(){

    int opcaoDistancia;

    do
        {

            printf("\n");

                menuDistancia();

            printf("Escolha: ");
            opcaoDistancia = lerInteiro();
        
        switch (opcaoDistancia){
        case 1: {

            float km;

            printf("Digite a quantidade em Km: ");
            km = lerFloat();

            printf("\nResultado:\n");
            float resultado = kmParaMilhas(km);

            printf("%.2f Km = %.2f Milhas\n", km, resultado);

            break;
        }
            
            
        case 2: {

            float milhas;

            printf("Digite a quantidade em Milhas: ");
            milhas = lerFloat();

            printf("\nResultado:\n");
            float resultado = milhasParaKm(milhas);

            printf("%.2f Milhas = %.2f Km\n", milhas, resultado);

            break;
        }
            
            
        case 3:
            printf("Voltando ao menu principal...\n");
            break;
        
        default:
            printf("Opcao invalida!\n");
            break;
        }

        } while (opcaoDistancia != 3);

}
void executarTemperatura(){

    int opcaoTemperatura;

        do
        {
            printf("\n");

            menuTemperatura();
        printf("Escolha: ");
        opcaoTemperatura = lerInteiro();
        
    switch (opcaoTemperatura){
    case 1: {
        float celsius;

        printf("Digite a temperatura em Celsius: ");
        celsius = lerFloat();

        printf("\nResultado:\n");
        float resultado = celsiusParaFahrenheit(celsius);

        printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, resultado);

        break;
    }
        
    case 2: {
        
        float fahrenheit;

        printf("Digite a temperatura em Fahrenheit: ");
        fahrenheit = lerFloat();

        printf("\nResultado:\n");
        float resultado = fahrenheitParaCelsius(fahrenheit);

        printf("%.2f Fahrenheit = %.2f Celsius\n", fahrenheit, resultado);

        break;

    }
    
    case 3:
            printf("Voltando ao menu principal...\n");
            break;
        
        default:
            printf("Opcao invalida!\n");
            break;
        }

        } while (opcaoTemperatura != 3);
        
       

}
void executarMoedas(){

    int opcaoMoeda;

        do
        {
         
            printf("\n");

                menuMoedas();
        printf("Escolha: ");
        opcaoMoeda = lerInteiro();

    switch (opcaoMoeda){
    case 1: {

        float real;

        printf("Digite a quantidade em Real: ");
        real = lerFloat();

        printf("\nResultado:\n");
        float resultado = realParaDolar(real);

        printf("%.2f Real = %.2f Dolar\n", real, resultado);

        break;

    }

    case 2: {

        float dolar;

        printf("Digite a quantidade em Dolar: ");
        dolar = lerFloat();

        printf("\nResultado:\n");
        float resultado = dolarParaReal(dolar);

        printf("%.2f Dolar = %.2f Real\n", dolar, resultado);

        break;

    }
        
    case 3:
            printf("Voltando ao menu principal...\n");
            break;
        
        default:
            printf("Opcao invalida!\n");
            break;
        }

        } while (opcaoMoeda != 3);

}



// MAIN
int main () {

    int opcao;

    do
    {
        
    menuPrincipal();
    // executa a funcao e devolva um inteiro para colocar dentro da variável opcao
    opcao = lerInteiro();

    switch (opcao){
    case 1 : {
        executarDistancia();
        break;
    }
    case 2 : {
        executarTemperatura();
        break;
    }
    case 3 : {
        executarMoedas();
        break;
    }
        
    case 0 :
        printf("\nEncerrando o programa...\n");
        break;
    
    default:
    printf("Opcao invalida!\n");
    break;
}
    } while (opcao != 0);


return 0;

} 