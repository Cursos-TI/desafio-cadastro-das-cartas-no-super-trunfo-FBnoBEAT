#include <stdio.h>
#include <stdlib.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

 //Definir Structs para as cartas
 //Seria como criar uma estrutura de variaveis para armazenar as informações de cada carta
 //Sem ter a necessidade de criar uma variavel para cada informação
 //Assim, podemos criar uma variavel do tipo struct Carta e armazenar todas as informações de uma carta
 // Seria como ser "Estrutura de Cartas quero os dados para Carta 1, Carta 2, Carta 3, etc"
 struct Carta {
    char estado;
    char codigo[4];
    char nomeDaCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
};

//Funcao sem retorno que recebe um ponteiro para uma struct Carta
//Essa funcao ira ler os dados de uma carta
//O ponteiro é utilizado para que a função possa alterar os valores da struct
//Caso não fosse utilizado o ponteiro, a função iria criar uma copia da struct e alterar os valores da copia
//Assim, a struct original não seria alterada
//O ponteiro faz com que a função altere diretamente a struct original
void lerCartas(struct Carta *ptr){
    fpurge(stdin);
    printf("Digite o estado da cidade: ");
    scanf("%c", &ptr->estado);
    printf("Digite o código da cidade: ");      
    scanf("%s", ptr->codigo);
    printf("Digite o nome da cidade: ");
    scanf("%s", ptr->nomeDaCidade);
    fpurge(stdin);
    printf("Digite a população da cidade: ");
    scanf("%d", &ptr->populacao);
    printf("Digite a área da cidade: ");
    scanf("%f", &ptr->area);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &ptr->pib);
    printf("Digite os pontos turisticos da cidade: ");
    scanf("%d", &ptr->pontosTuristicos);
}


//Funcao sem retorno que exibe os dados de cada carta
//onde no parametros da funcao, é passado uma struct Carta
//Essa função irá exibir os dados de uma carta
//por exemplo o x espera que seja passado uma variavel quando for chamar a funcao, exemplo Carta1 chamara o struct Carta1
//Assim, a função irá exibir os dados da struct Carta1
void exibirCartas(struct Carta x){
    printf("Estado: %c\n", x.estado);
    printf("Codigo: %s\n", x.codigo);
    printf("Nome da Cidade: %s\n", x.nomeDaCidade);
    printf("Populacao: %d\n", x.populacao);
    printf("Area: %.2f km²\n", x.area);
    printf("PIB: %.2f bilhões de reais\n", x.pib);
    printf("Pontos Turisticos: %d\n", x.pontosTuristicos);
    x.densidadePopulacional = (float)x.populacao / x.area;
    x.pibPerCapita = (x.pib*1e9) / (float)x.populacao; //pesquisei e usei 1e9 para converter reais para bilhões exemplo 699.28 reais fica 699.280.000.000 reais
    printf("Densidade Populacional: %.2f hab/km²\n", x.densidadePopulacional);
    printf("PIB per Capita: %.2f reais/habitante\n", x.pibPerCapita);
}


int main() {
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    //Comecar o programa limpando a tela do terminal
    system("clear");
    struct Carta carta1, carta2;

    //Chamar a função lerCartas para ler os dados de cada carta
    lerCartas(&carta1);
    system("clear");
    lerCartas(&carta2);
    system("clear");

    // Exibir as Cartas:
    exibirCartas(carta1);
    printf("\n\n\n");
    exibirCartas(carta2);
    return 0;
}

//NA COMPARACAO USAR UMA FUNCAO DO TIPO BOOL PARA VERIFICAR QUAL CARTA E MAIOR
//NAO ESQUECER DE FAZER A COMPARACAO DE CADA ATRIBUTO DE CADA CARTA