#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    /*
    Legenda dos Estados
    
    São Paulo = A
        Legenda das Cidades
            Campinas = A1 
            Indaiatuba = A2 
            Jundiai = A3 
            Franca = A4 
    Rio de Janeiro = B
        Legenda das Cidades 
            Niteroi = B1
            Petropolis = B2
            Nova Iguacu = B3
            Angra dos Reis = B4
    
    */
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    //Declaracao das Variaveis
    int Populacao_A1, Populacao_B1, NumeroPonto_A1, NumeroPonto_B1;
    float Area_A1, Area_B1, Pib_A1, Pib_B1;
    
    //informações Carta A1 - Campinas-SP
    printf("Digite a POPULAÇÃO de Campinas-SP: ");
    scanf("%d", &Populacao_A1);
    system("clear");
    printf("Digite a Área de Campinas-SP: ");
    scanf("%f", &Area_A1);
    system("clear");
    printf("Digite o PIB de Campinas-SP: ");
    scanf("%f", &Pib_A1);
    system("clear");
    printf("Digite quantos PONTOS TURISTICOS tem Campinas-SP: ");
    scanf("%d", &NumeroPonto_A1);
    system("clear");
    
    //informações Carta B1 - Niteroi-RJ
    printf("Digite a POPULAÇÃO de Niteroi-RJ: ");
    scanf("%d", &Populacao_B1);
    system("clear");
    printf("Digite a Área de Niteroi-RJ: ");
    scanf("%f", &Area_B1);
    system("clear");
    printf("Digite o PIB de Niteroi-RJ: ");
    scanf("%f", &Pib_B1);
    system("clear");
    printf("Digite quantos PONTOS TURISTICOS tem Niteroi-RJ: ");
    scanf("%d", &NumeroPonto_B1);
    system("clear");
    
    //limpar buffer
    __fpurge(stdin); // pra usar tive que adicionar a biblioteca #include <stdio_ext.h>
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    //Exibicao Campinas-SP
    printf("------------------------------------------\n|A1|    \tCampinas-SP              |\n------------------------------------------\n");
    printf("Populacao| \t%d habitantes\n------------------------------------------\n", Populacao_A1);
    printf("Área| \t%f m²\n------------------------------------------\n", Area_A1);
    printf("PIB| \t%f per capita\n------------------------------------------\n", Pib_A1);
    printf("Pontos Turisticos| \t%d pontos\n------------------------------------------\n\n", NumeroPonto_A1);
    printf("\033[32mPressione Enter para continuar...\033[0m"); //usei tabela ANSI para mudar as cor de texto
    getchar(); // Aguarda o usuário pressionar Enter
    system("clear");
    //Exibicao Niteroi-RJ
    printf("------------------------------------------\n|B1|    \tNiteroi-RJ              |\n------------------------------------------\n");
    printf("Populacao| \t%d habitantes\n------------------------------------------\n", Populacao_B1);
    printf("Área| \t%f m²\n------------------------------------------\n", Area_B1);
    printf("PIB| \t%f per capita\n------------------------------------------\n", Pib_B1);
    printf("Pontos Turisticos| \t%d pontos\n------------------------------------------\n", NumeroPonto_B1);
    
    return 0;
}

