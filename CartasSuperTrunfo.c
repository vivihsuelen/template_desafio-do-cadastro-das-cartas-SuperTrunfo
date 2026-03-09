#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    //carta 1 variaveis
    char estado;
    char codigo[5];
    char cidade[20];
    int populacao, pontosturisticos;
    float area, pib, densidadepopu, pibpercapita;

    //carta 2 variaveis
    char estado2;
    char codigo2[5];
    char cidade2[20];
    int populacao2, pontosturisticos2;
    float area2, pib2, densidadepopu2, pibpercapita2;

    // Área para entrada de dados
    printf("============== CARTA 1 ==============\n");
    printf("Digite o Estado (uma letra): ");
    scanf(" %c", &estado);
    getchar(); // Limpar o buffer
    
    printf("Digite o Codigo (Max 4 letras): ");
    scanf("%4s", codigo);
    
    printf("Digite a Cidade (s/ espaco, Max 19 letras): ");
    scanf("%19s", cidade);
    
    printf("Digite a Populacao: ");
    scanf("%d", &populacao);
    
    printf("Digite a Area: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontosturisticos);

    //insira os dados da carta 2
    printf("============== CARTA 2 ==============\n");
    printf("Digite o Estado (uma letra): ");
    scanf(" %c", &estado2);
    getchar(); // Limpar o buffer

    printf("Digite o Codigo (Max 4 letras): ");
    scanf("%4s", codigo2);

    printf("Digite a Cidade (s/ espaco, Max 19 letras): ");
    scanf("%19s", cidade2);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a Area: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontosturisticos2);

    // Área para exibição dos dados da carta 1 na tela
    printf("============== CARTA 1 ==============\n");
    printf("------------- Carta 1 ------------\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turisticos: %d\n", pontosturisticos);
    densidadepopu = populacao / area;
    printf("Densidade Populacional: %.2f\n", densidadepopu);
    pibpercapita = (pib * 1000000000.0) / populacao;
    printf("PIB per Capita: %.2f\n", pibpercapita);


    printf("============== CARTA 2 ==============\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
    densidadepopu2 = populacao2 / area2;
    printf("Densidade Populacional: %.2f\n", densidadepopu2);
    pibpercapita2 = (pib2 * 1000000000.0) / populacao2;
    printf("PIB per Capita: %.2f\n", pibpercapita2);

return 0;
} 
