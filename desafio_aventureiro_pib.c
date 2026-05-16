#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - No nível Aventureiro, você expandirá o sistema para incluir propriedades calculadas, permitindo uma análise mais detalhada das cartas.

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades
    //CARTA 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    // foi adicionado análise de daods com divisão
    float Densidade_Populacional;
    float PIB_per_Capita;

    //CARTA 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    // foi adicionado análise de daods com divisão
    float Densidade_Populacional2;
    float  PIB_per_Capita2;

    //Área para entrada de dados
    //ENTRADA CARTA 1 
    printf("Cadastro da Carta 1\n");
    printf("\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    getchar(); // limpa buffer

    printf("Nome da Cidade: ");
    fgets(cidade1, 50, stdin);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB:");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos1);

//Área de cáuculo de dados por divisão entre população / area(km)
    Densidade_Populacional= (populacao1) / (area1) ;
    printf("A densidade populacional é: %.5f\n", Densidade_Populacional);

// Área de cáuculo de dados por divisão entre PIB / população
     PIB_per_Capita= (pib1) / (populacao1) ;
    printf("O PIB per capita é: %.5f\n", PIB_per_Capita);

    printf("\n");// para separar e deixar mais organizado para iniciar o próximo

    //ENTRADA CARTA 2
    printf("Cadastro da Carta 2\n");
    printf("\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    getchar(); // limpa buffer

    printf("Nome da Cidade: ");
    fgets(cidade2, 50, stdin);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos2);

//Área de cáuculo de dados por divisão entre população / area(km)
    Densidade_Populacional2= (populacao2) / (area2) ;
    printf("A densidade populacional é: %.5f\n", Densidade_Populacional);

// Área de cáuculo de dados por divisão entre PIB / população
     PIB_per_Capita2= (pib2) / (populacao2);
    printf("O PIB per capita é: %.5f\n", PIB_per_Capita2);

    getchar(); // limpa buffer
    printf("\n");// para separar e deixar mais organizado para iniciar o próximo

    // Área para exibição dos dados da cidade
    printf(" Cadastro das cartas\n");
    printf("\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s", codigo1);
    printf("\nNome da Cidade: %s", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);
    printf("Densidade populacional: %.5f\n", Densidade_Populacional);
    printf("PIB per capita:%.5f\n", PIB_per_Capita);
    

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s", codigo2);
    printf("\nNome da Cidade: %s", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("Densidade populacional: %.5f\n", Densidade_Populacional2);
    printf("PIB per capita:%.5f\n", PIB_per_Capita2);



    return 0;
}
