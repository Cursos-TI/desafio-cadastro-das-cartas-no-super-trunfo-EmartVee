#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa ss

int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Captura os dados da primeira carta
    char estado1[1], codigoCarta1[3], nomeCidade1[50]; 
    int populacao1, pontosTuristicos1; 
    float pib1, area1; 

    // Captura os dados da segunda carta
    char estado2[1], codigoCarta2[3], nomeCidade2[50]; 
    int populacao2, pontosTuristicos2; 
    float pib2, area2; 

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    //Coleta as informações de Estado das cartas
    printf("Defina o Estado com uma letra entre A e H para a primeira carta: ");
    scanf("%s", &estado1);

    printf("Defina o Estado com uma letra entre A e H para a segunda carta: ");
    scanf("%s", &estado2);

    // Coleta os dados do código das cartas
    printf("Defina o Codigo da primeira Carta entre 01 e 04: ");
    scanf("%s", &codigoCarta1);

    printf("Defina o Codigo da segunda Carta entre 01 e 04: ");
    scanf("%s", &codigoCarta2);

    // Coleta dados das Cidades das cartas
    printf("Defina nome da Cidade da primeira carta: ");
    scanf("%s", &nomeCidade1);

    printf("Defina nome da Cidade da segunda carta: ");
    scanf("%s", &nomeCidade2);

    //Coleta valor populacional das cartas
    printf("Informe o valor populacional da primeira carta: ");
    scanf("%d", &populacao1);

    printf("Informe o valor populacional da segunda carta: ");
    scanf("%d", &populacao2);

    // Coleta valores populacionais das cartas
    printf("Informa a quantidade de pontos turisticos da primeira carta: ");
    scanf("%d", &pontosTuristicos1);

    printf("Informa a quantidade de pontos turisticos da segunda carta: ");
    scanf("%d", &pontosTuristicos2);

    // Coleta valor do PIB das cartas
    printf("Informe o valor do PIB da primeira carta: ");
    scanf("%f", &pib1);

    printf("Informe o valor do PIB da segunda carta: ");
    scanf("%f", &pib2);

    // Coleta valor de area das cartas
    printf("Informe o valor da area da primeira carta: ");
    scanf("%f", &area1);

    printf("Informe o valor da area da segunda carta: ");
    scanf("%f", &area2);

    printf("Cartas cadastradas: \n"); 
    printf("Carta: %d \n", &codigoCarta1);
    printf("Carta: %d \n", &codigoCarta2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
