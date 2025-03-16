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
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
    double superPoder;  //usei double porque o valor ficou grande pois converti a densidade invertida para ficar melhor de visualizar, pois retornava um nuemro 0,00000 e queria que ficasse 123,45678 por exemplo
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
    scanf("%lu", &ptr->populacao);
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
    printf("Populacao: %lu\n", x.populacao);
    printf("Area: %.2f km²\n", x.area);
    printf("PIB: %.2f bilhões de reais\n", x.pib);
    printf("Pontos Turisticos: %d\n", x.pontosTuristicos);
    x.densidadePopulacional = (float)x.populacao / x.area;
    x.pibPerCapita = (x.pib*1e9) / (float)x.populacao; //pesquisei e usei 1e9(mesma coisa que multiplicar por 1.000.000.000) para converter reais para bilhões exemplo 699.28 reais fica 699.280.000.000 reais
    x.superPoder = (float)x.populacao + x.area + x.pib + (float)x.pontosTuristicos + x.pibPerCapita + (1 / x.densidadePopulacional * 1e6);
    printf("Densidade Populacional: %.2f hab/km²\n", x.densidadePopulacional);
    printf("PIB per Capita: %.2f reais/habitante\n", x.pibPerCapita);
    printf("Super Poder: %.2lf\n", x.superPoder);
}

void compararCartas(struct Carta x, struct Carta y){
/*
(condiacao) ? valor_se_verdadeiro : valor_se_falso
A expressão acima é um operador ternário, que é uma forma simplificada de escrever um if-else.
Se a condição for verdadeira, o valor_se_verdadeiro é retornado, caso contrário, o valor_se_falso é retornado.
*/

    printf("\n\nComparando as cartas:\n");
    printf("Populacao: %s\n", (x.populacao > y.populacao) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("Area: %s\n", (x.area > y.area) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("PIB: %s\n", (x.pib > y.pib) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("Pontos Turisticos: %s\n", (x.pontosTuristicos > y.pontosTuristicos) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("Densidade Populacional: %s\n", (x.densidadePopulacional < y.densidadePopulacional) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("PIB per Capita: %s\n", (x.pibPerCapita > y.pibPerCapita) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("Super Poder: %s\n", (x.superPoder > y.superPoder) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
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

    //Comparar as cartas
    compararCartas(carta1, carta2);
/*
Usei structs para fazer o cadastro das cartas, assim nao sendo necessario declarar varias variaveis para a mesma finalidade
Depois pensei em usar funcao void para separar cada parte do meu codigo, facilitando e nao tendo que reescrever para a segunda carta
assim tendo mais praticidade e organizacao. Porem tive que pesquisar sobre ponteiros, pois meu conhecimento nao era tao avancado para
assimilar como implementar no meu codigo, pesquisei e aprendi como usar, explicando nas minhas palavras para reforcar meu aprendizado

    criei a void lerCartas, e passei no parametro dela a struct Carta usando um ponteiro *ptr para que a funcao possa alterar os valores da struct
    entao crio o struct na main por exemplo struct Cartas carta1, e chamo a funcao lerCartas(&carta1) passando o endereco da struct
    assim a funcao ira alterar diretamente a struct original, sem precisar criar uma copia dela
    assim nao sendo necessario declarar varias variaveis para a mesma finalidade

    criei a void exibirCartas, e passei no parametro dela a struct Carta x para que a funcao possa exibir os valores da struct
    entao quando chamo a funcao exibirCartas(carta1) ela ira exibir os valores da struct carta1 ---- pois o x esperado no parametro assume o valor de carta1
    passado na funcao 

    criei a void compararCartas, e passei no parametro dela a struct Carta x e struct Carta y para que a funcao possa comparar os valores das structs
    entao quando chamo a funcao compararCartas(carta1, carta2) ela ira comparar os valores das structs carta1 e carta2
    e exibir qual carta venceu em cada comparacao

    usei o operador ternario para exibir qual carta venceu em cada comparacao
    por exemplo (x.populacao > y.populacao) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)" 
    reforcei meu aprendizado pois depois que aprendi If/else nem lembrava mais que poderia simplificar desse jeito
*/


    return 0;
}