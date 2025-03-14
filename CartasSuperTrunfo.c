#include <stdio.h>

int main() {

    // Captura os dados da primeira carta
    char estado1[1], nomeCidade1[50], codigoCarta1[4]; 
    int populacao1, pontosTuristicos1; 
    float pib1, area1;

    // Captura os dados da segunda carta
    char estado2[1], nomeCidade2[50], codigoCarta2[4]; 
    int populacao2, pontosTuristicos2; 
    float pib2, area2;
    
    //Coleta as informações de Estado das cartas
    printf("Defina o Estado com uma letra entre A e H para a primeira carta: ");
    scanf("%s", &estado1);

    printf("Defina o Estado com uma letra entre A e H para a segunda carta: ");
    scanf("%s", &estado2);

    // Coleta os dados do código das cartas
    printf("Defina o Codigo da primeira Carta utilizando a letra de Estado cadastrado seguida de um dos valores entre 01 e 04: ");
    scanf("%s", &codigoCarta1);

    printf("Defina o Codigo da segunda Carta utilizando a letra de Estado cadastrado seguida de um dos valores entre 01 e 04: ");
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

    // Coleta valor de area das cartas
    printf("Informe o valor da area da primeira carta: ");
    scanf("%f", &area1);

    printf("Informe o valor da area da segunda carta: ");
    scanf("%f", &area2);

    // Coleta valor do PIB das cartas
    printf("Informe o valor do PIB da primeira carta: ");
    scanf("%f", &pib1);

    printf("Informe o valor do PIB da segunda carta: ");
    scanf("%f", &pib2);

    // Coleta valores populacionais das cartas
    printf("Informa a quantidade de pontos turisticos da primeira carta: ");
    scanf("%d", &pontosTuristicos1);

    printf("Informa a quantidade de pontos turisticos da segunda carta: ");
    scanf("%d", &pontosTuristicos2);

    //Inicia a informação das cartas cadastradas
    printf("Cartas cadastradas: \n\n"); 
    
    //Exibe as cartas cadastradas
    printf("Carta: 1\nEstado: %s\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nNúmeros de Pontos Turisticos: %d\n\n", 
        estado1,codigoCarta1,nomeCidade1,populacao1,area1,pib1,pontosTuristicos1);
    printf("Carta: 2\nEstado: %s\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nNúmeros de Pontos Turisticos: %d\n\n", 
        estado2,codigoCarta2,nomeCidade2,populacao2,area2,pib2,pontosTuristicos2);

    return 0;
}
