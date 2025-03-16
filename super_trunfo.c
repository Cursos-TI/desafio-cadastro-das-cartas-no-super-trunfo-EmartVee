#include <stdio.h>

int main() {

    // Captura os dados da primeira carta
    char estado1[2], nomeCidade1[50], codigoCarta1[4]; 
    int populacao1, pontosTuristicos1; 
    float pib1, area1, densidadePolulacional1, pibCapita1;

    // Captura os dados da segunda carta
    char estado2[2], nomeCidade2[50], codigoCarta2[4]; 
    int populacao2, pontosTuristicos2; 
    float pib2, area2, densidadePolulacional2, pibCapita2;

    // Coletando dados da primeira carta
    
    //Coleta as informações de Estado da carta
    printf("Defina o Estado com uma letra entre A e H para a primeira carta: ");
    scanf("%s", &estado1);

    // Coleta os dados do código da carta
    printf("Defina o Codigo da primeira Carta utilizando a letra de Estado cadastrado seguida de um dos valores entre 01 e 04: ");
    scanf("%s", &codigoCarta1);

    // Coleta dados das Cidades da carta
    printf("Defina nome da Cidade da primeira carta: ");
    scanf("%s", &nomeCidade1);

    //Coleta valor populacional da carta
    printf("Informe o valor populacional da primeira carta: ");
    scanf("%d", &populacao1);

    // Coleta valor de area da carta
    printf("Informe o valor da area da primeira carta: ");
    scanf("%f", &area1);

    // Coleta valor do PIB da carta
    printf("Informe o valor do PIB da primeira carta: ");
    scanf("%f", &pib1);

    // Coleta valores populacionais da carta
    printf("Informa a quantidade de pontos turisticos da primeira carta: ");
    scanf("%d", &pontosTuristicos1);

    // Coletando os dados da segunda carta   

    //Coleta as informações de Estado da carta
    printf("\nDefina o Estado com uma letra entre A e H para a segunda carta: ");
    scanf("%s", &estado2);

    // Coleta os dados do código da carta
    printf("Defina o Codigo da segunda Carta utilizando a letra de Estado cadastrado seguida de um dos valores entre 01 e 04: ");
    scanf("%s", &codigoCarta2);

    // Coleta dados das Cidades da carta
    printf("Defina nome da Cidade da segunda carta: ");
    scanf("%s", &nomeCidade2);

    //Coleta valor populacional da carta
    printf("Informe o valor populacional da segunda carta: ");
    scanf("%d", &populacao2);

    // Coleta valor de area da carta
    printf("Informe o valor da area da segunda carta: ");
    scanf("%f", &area2);

    // Coleta valor do PIB da carta
    printf("Informe o valor do PIB da segunda carta: ");
    scanf("%f", &pib2);

    // Coleta valores populacionais da carta
    printf("Informa a quantidade de pontos turisticos da segunda carta: ");
    scanf("%d", &pontosTuristicos2);

    // Calcula a densidade Populacional e o PIB.
    densidadePolulacional1 = populacao1/area1;
    pibCapita1 = pib1/populacao1;

    densidadePolulacional2 = populacao2/area2;
    pibCapita2 = pib2/populacao2;

    //Inicia a informação das cartas cadastradas
    printf("Cartas cadastradas: \n\n"); 
    
    //Exibe as cartas cadastradas
    printf("Carta: 1\nEstado: %s\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f de reais\nNúmeros de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n\n", 
        estado1,codigoCarta1,nomeCidade1,populacao1,area1,pib1,pontosTuristicos1,densidadePolulacional1,pibCapita1);
    printf("Carta: 2\nEstado: %s\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f de reais\nNúmeros de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n\n", 
        estado2,codigoCarta2,nomeCidade2,populacao2,area2,pib2,pontosTuristicos2,densidadePolulacional2,pibCapita2);

    return 0;
}
