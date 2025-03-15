#include <stdio.h>
#include <stdlib.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    //Comecar o programa limpando a tela do terminal
    system("clear");

    //Definir variaveis
    char estadoCarta1;
    char codigoCarta1[4];
    char nomeDaCidadeCarta1[50];
    int populacaoCarta1;
    float areaCarta1;
    float pibCarta1;
    int pontosTuristicosCarta1;

    fpurge(stdin); //limpa buffer do teclado

    //Pedir ao usuario que insira as informacoes da carta 1
    printf("Insira o estado da carta 1: ");
    scanf("%c", &estadoCarta1);
    system("clear"); //limpar a tela do terminal
    printf("Insira o codigo da carta 1: ");
    scanf("%3s", codigoCarta1);

    system("clear"); //limpar a tela do terminal
    printf("Insira o nome da Cidade da carta 1: ");
    scanf("%s", nomeDaCidadeCarta1);
    system("clear"); //limpar a tela do terminal

    fpurge(stdin); //limpa buffer do teclado

    printf("Insira a Populacao da cidade da carta 1: ");
    scanf("%d", &populacaoCarta1);    
    system("clear"); //limpar a tela do terminal
    printf("Insira a Area da cidade da carta 1: ");
    scanf("%f", &areaCarta1);
    system("clear"); //limpar a tela do terminal
    printf("Insira o PIB da cidade da carta 1: ");
    scanf("%f", &pibCarta1);
    system("clear"); //limpar a tela do terminal
    printf("Quantos Pontos Turisticos tem a cidade da carta 1: ");
    scanf("%d", &pontosTuristicosCarta1);
    system("clear"); //limpar a tela do terminal
    //Repetir o processo para a carta 2 ------------

    // Definir variáveis para a carta 2
    char estadoCarta2;
    char codigoCarta2[4];
    char nomeDaCidadeCarta2[50];
    int populacaoCarta2;
    float areaCarta2;
    float pibCarta2;
    int pontosTuristicosCarta2;

    fpurge(stdin); // limpa buffer do teclado

    // Pedir ao usuário que insira as informações da carta 2
    printf("Insira o estado da carta 2: ");
    scanf("%c", &estadoCarta2);
    system("clear"); // limpar a tela do terminal

    printf("Insira o código da carta 2: ");
    scanf("%3s", codigoCarta2);
    system("clear"); // limpar a tela do terminal

    printf("Insira o nome da Cidade da carta 2: ");
    scanf("%s", nomeDaCidadeCarta2);
    system("clear"); // limpar a tela do terminal

    fpurge(stdin); // limpa buffer do teclado

    printf("Insira a População da cidade da carta 2: ");
    scanf("%d", &populacaoCarta2);
    system("clear"); // limpar a tela do terminal

    printf("Insira a Área da cidade da carta 2: ");
    scanf("%f", &areaCarta2);
    system("clear"); // limpar a tela do terminal

    printf("Insira o PIB da cidade da carta 2: ");
    scanf("%f", &pibCarta2);
    system("clear"); // limpar a tela do terminal

    printf("Quantos Pontos Turísticos tem a cidade da carta 2: ");
    scanf("%d", &pontosTuristicosCarta2);
    system("clear"); // limpar a tela do terminal

     //Imprimir as informacoes da carta 1
     printf("Carta 1\n");
     printf("Estado: %c \n", estadoCarta1);
     printf("Codigo: %s\n", codigoCarta1);
     printf("Nome da Cidade: %s\n", nomeDaCidadeCarta1);
     printf("Populacao: %d\n", populacaoCarta1);
     printf("Area: %.2f km^2\n", areaCarta1);
     printf("PIB: %.2f bilhoes de reais\n", pibCarta1);
     printf("Numero de Pontos Turisticos: %d\n\n\n", pontosTuristicosCarta1);

    // Imprimir as informações da carta 2
    printf("Carta 2\n");
    printf("Estado: %c \n", estadoCarta2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeDaCidadeCarta2);
    printf("População: %d\n", populacaoCarta2);
    printf("Área: %.2f km^2\n", areaCarta2);
    printf("PIB: %.2f bilhões de reais\n", pibCarta2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicosCarta2);

    return 0;
}

